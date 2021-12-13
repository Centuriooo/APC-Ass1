
#include "int_option.h"
#include "int_argument.h"
#include <charconv>

std::unique_ptr<argument> int_option::parse(const char* arg) const {
    int n;

    std::string_view  sv{arg};
    auto[ptr, ec] = std::from_chars(sv.data(), sv.data() + sv.size(), n);
    if (ec == std::errc()) {
        std::unique_ptr<int_argument> a = std::make_unique<int_argument>(m_long, n);
        return a;
    }

    return nullptr;
}

