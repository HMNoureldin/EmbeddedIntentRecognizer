/** @file CommandLineSingleton.cpp
 *  @brief Function Definition for the abstract cmd.
 *
 *  This contains the Definition for the console
 *  which abstract cmd functions
 *
 *  @author Hesham Noureldin
 */



#include "../inc/CommandLineSingleton.hpp"
#include "../inc/defs.hpp"


/**
 * Get singelton class unique instance of CommandLineSingleton.
 *
 * @return CommandLineSingleton instance.
 */

CommandLineSingleton & CommandLineSingleton::Instance() {
    static CommandLineSingleton instance;
    return instance;

}

/**
 * Takes input from the user
 *
 * @return string input from user.
 */
std::string CommandLineSingleton::InputFromUser() const {
    std::string input;
    std::getline(std::cin, input);
    return input;
}

/**
 * Prints a message to cmd.
 *
 * @param message message to be printed.
 */
void CommandLineSingleton::MsgDisplay(const std::string& message) const {
    std::cout<<  message.c_str() << std::endl;
}

/**
 * Clear cmd.
 *
 */
void CommandLineSingleton::Clear() const {
    std::cout<< Cmd::clear_cmd; 
}




