
#include "CommandLineSingleton.h"

CommandLineSingleton* CommandLineSingleton::console = nullptr;

CommandLineSingleton* CommandLineSingleton::GetInstance() {
    if(console == nullptr){
        console = new CommandLineSingleton();
    }

    return console;
}


std::string CommandLineSingleton::GetInputFromUser() const {
    std::string input;
    getline(std::cin, input);
    return input;
}


void CommandLineSingleton::MsgDisplay(const std::string& message) const {
    std::cout<< message.c_str() << endl;
}


void CommandLineSingleton::Clear() const {
    std::cout<< u8"\033[2J\033[1;1H"; 
}


CommandLineSingleton::~CommandLineSingleton(){
        delete console;
} 