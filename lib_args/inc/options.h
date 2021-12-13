

#ifndef MAIN_CPP_OPTIONS_H
#define MAIN_CPP_OPTIONS_H

#include "argument.h"

class options {
public:
    options(std::string short_flag, std::string long_flag, std::string desc) : m_short{short_flag}, m_long{long_flag}, m_desc{desc};

    const std::string& long_flag() const {return m_long;};
    const std::string& short_flag() const {return m_short;};
    const std::string& desc() const {return m_desc;};

    virtual std::string help() const;
    virtual bool can_parse(const char* arg) const;
    virtual std::unique_ptr<argument> parse(const char* arg) const = 0;
    virtual ~options() =default;

protected:
    std::string m_long;
    std::string m_short;
    std::string m_desc;
};

#endif //MAIN_CPP_OPTIONS_H
