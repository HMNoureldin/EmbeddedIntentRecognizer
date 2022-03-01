/** @file CommandLineSingleton.hpp
 *  @brief Function prototypes for the abstract cmd.
 *
 *  This contains the prototypes for the console
 *  which abstract cmd functions
 *
 *  @author Hesham Noureldin
 */


#ifndef COMMANDLINESINGLETON_H
#define COMMANDLINESINGLETON_H

#include <iostream>
#include <string>
#include <memory>


/**
 * Class for abstracting cmd.
 *
 * This class to gurante that there is only one instance of cmd to be used 
 * by the application user. It provides abstraction of cmd functions.
 */

class CommandLineSingleton final {
    private:
        CommandLineSingleton() = default;
    public:
        static CommandLineSingleton & Instance();
        std::string InputFromUser() const;
        void MsgDisplay(const std::string& message) const;
        void Clear() const;
        ~CommandLineSingleton() = default;
        CommandLineSingleton(const  CommandLineSingleton&) = delete;
        CommandLineSingleton( CommandLineSingleton&&) = delete;
        CommandLineSingleton& operator=(const  CommandLineSingleton&) = delete;
        CommandLineSingleton& operator=( CommandLineSingleton&&) = delete;

};



#endif