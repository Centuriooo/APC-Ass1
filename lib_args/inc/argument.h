

#ifndef MAIN_CPP_ARGUMENT_H
#define MAIN_CPP_ARGUMENT_H

#include <string>

class argument {
public:
    argument(std::string & id) : m_id{id} {};
    const std::string& id() const {return m_id;};
    virtual ~argument() = default;
private:
    std::string m_id;
};


#endif //MAIN_CPP_ARGUMENT_H
