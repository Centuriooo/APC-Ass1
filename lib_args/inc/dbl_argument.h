
#ifndef MAIN_CPP_DBL_ARGUMENT_H
#define MAIN_CPP_DBL_ARGUMENT_H

#include "argument.h"

class dbl_argument : public argument {
public:
    dbl_argument(std::string id, double value);
    double value();
private:
    double m_value;
};


#endif //MAIN_CPP_DBL_ARGUMENT_H
