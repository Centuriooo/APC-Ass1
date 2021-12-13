

#ifndef MAIN_CPP_INT_ARGUMENT_H
#define MAIN_CPP_INT_ARGUMENT_H

#include "argument.h"

class int_argument : public argument {
public:
    int_argument(std::string id, int value);
    int value();
private:
    int m_value;
};


#endif //MAIN_CPP_INT_ARGUMENT_H
