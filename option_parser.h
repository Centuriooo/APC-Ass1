//
// Created by Tim on 11/30/2021.
//

#ifndef MAIN_CPP_OPTION_PARSER_H
#define MAIN_CPP_OPTION_PARSER_H


#include <vector>
#include <memory>
#include "argument.h"
#include "options.h"

class option_parser {
public:
    std::vector<std::unique_ptr<argument>> parse(char *args[], int nargs) const;
private:
    std::vector<std::unique_ptr<options>> m_options;
};


#endif //MAIN_CPP_OPTION_PARSER_H
