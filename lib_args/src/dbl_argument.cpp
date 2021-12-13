#include "dbl_argument.h"

dbl_argument::dbl_argument(std::string id, double value) : argument(id), m_value{value} {}

double dbl_argument::value() {
    return m_value;
}