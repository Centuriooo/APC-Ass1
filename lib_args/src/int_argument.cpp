
#include "int_argument.h"


int_argument::int_argument(std::string id, int value) : argument(id), m_value{value}{}

int int_argument::value() {
    return m_value;
}

