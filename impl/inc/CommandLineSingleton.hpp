#ifndef COMMANDLINESINGLETON_H
#define COMMANDLINESINGLETON_H

#include <iostream>
#include <string>
#include <memory>

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