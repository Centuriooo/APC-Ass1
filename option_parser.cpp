//
// Created by Tim on 11/30/2021.
//

#include "option_parser.h"

std::vector<std::unique_ptr<argument>> option_parser::parse(char **args, int nargs) const {
    std::vector<std::unique_ptr<argument>> parsed;

    for (int i = 0; i < nargs; ++i) {
        for (const auto& opt: m_options) {
            if (opt->can_parse(args[i])) {
                ++i;

                if(auto value = opt->parse(args[i])) {
                    parsed.push_back(std::move(value));
                }
            }
        }
    }

    return parsed;
}
