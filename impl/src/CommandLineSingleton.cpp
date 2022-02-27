
#include "../inc/CommandLineSingleton.hpp"
#include "../inc/defs.hpp"


CommandLineSingleton & CommandLineSingleton::Instance() {
    static CommandLineSingleton instance;
    return instance;

}


std::string CommandLineSingleton::InputFromUser() const {
    std::string input;
    std::getline(std::cin, input);
    return input;
}


void CommandLineSingleton::MsgDisplay(const std::string& message) const {
    std::cout<<  message.c_str() << std::endl;
}


void CommandLineSingleton::Clear() const {
    std::cout<< Cmd::clear_cmd; 
}




