#ifndef COMMANDLINESINGLETON_H
#define COMMANDLINESINGLETON_H

#include <iostream>
#include <string>

using namespace std;

class CommandLineSingleton {
    private:
        CommandLineSingleton() {}
        static CommandLineSingleton* console;
    public:
        static CommandLineSingleton* GetInstance();
        std::string GetInputFromUser() const;
        void MsgDisplay(const std::string& message) const;
        void Clear() const;
        ~CommandLineSingleton();
};

#endif