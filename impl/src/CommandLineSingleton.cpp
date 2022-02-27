
#include "../inc/CommandLineSingleton.hpp"
#include "../inc/defs.hpp"
#include <algorithm>



CommandLineSingleton & CommandLineSingleton::Instance() {
    static CommandLineSingleton instance;
    return instance;

}


std::string CommandLineSingleton::InputFromUser() const {
    std::string input;
    std::getline(std::cin, input);
    // convert the input line to lower case for intent recognization check
	transform(input.begin(), input.end(), input.begin(), ::tolower);
    return input;
}


void CommandLineSingleton::MsgDisplay(const std::string& message) const {
    std::cout<< "Intent: " << message.c_str() << std::endl;
}


void CommandLineSingleton::Clear() const {
    std::cout<< Cmd::clear_cmd; 
}




