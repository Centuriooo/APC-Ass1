

#ifndef MAIN_CPP_INT_OPTION_H
#define MAIN_CPP_INT_OPTION_H

#include <memory>
#include "options.h"

class int_option : public options {
public:
    using options::options;

    std::unique_ptr<argument> parse(const char* arg) const override;



};


#endif //MAIN_CPP_INT_OPTION_H
