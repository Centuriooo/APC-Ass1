//
// Created by Tim on 11/30/2021.
//

#ifndef MAIN_CPP_TXT_ARGUMENT_H
#define MAIN_CPP_TXT_ARGUMENT_H

#include "argument.h"

class txt_argument : public argument{
public:
    txt_argument(std::string id, std::string value);
    std::string value();
private:
    std::string m_value;
};


#endif //MAIN_CPP_TXT_ARGUMENT_H
