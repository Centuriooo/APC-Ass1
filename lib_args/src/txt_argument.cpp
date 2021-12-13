//
// Created by Tim on 11/30/2021.
//

#include "txt_argument.h"

txt_argument::txt_argument(std::string id, std::string value) : argument(id), m_value{value} {}

std::string txt_argument::value() {
    return m_value;
}
