#include <sstream>
#include <txt_argument.h>
#include "int_argument.h"
#include "dbl_argument.h"

#include "lib_args.h"
#include "program.h"
#include "option_parser.h"


int main(int argc, char *argv[]) {

    option_parser parser{};

    add_option({'v', "verbose", "prints verbose diagnostics", false, pt_none});
    add_option({'l', "level", "sets compression level (0.0-1.0)", true, pt_float});
    add_option({'i', "input", "input file name", true, pt_text});
    add_option({'o', "output", "output file name", true, pt_text});
    add_option({'s', "size", "dictionary size in kb (1-1000)", true, pt_int});

    auto arguments = parser.parse(argv, argc);

    std::unique_ptr<argument> m_args;
    for (const auto& arg : m_args) {
        argument* raw_arg = arg.get();
        if(auto* int_arg = dynamic_cast<int_argument*>(raw_arg)) {
            std::cout << int_arg->id() << ": " << int_arg->value() <<'\n';
        }
        else if(auto* dbl_arg = dynamic_cast<dbl_argument*>(raw_arg)){
            std::cout << dbl_arg->id() << ": " << dbl_arg->value() << '\n';
        }
        else if(auto* txt_arg = dynamic_cast<txt_argument>(raw_arg)){
            std::cout << txt_arg->id() << ": " << txt_arg->value() << '\n';
        }
    }

    std::ostringstream oss{};
    for (int arg_no = 0; arg_no < argc; ++ arg_no){
        oss << argv[arg_no] << ' ';
    }

    program prog{arguments};

    prog.run();

    return 0;
}
