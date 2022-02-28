#ifndef _INTENTRECOGNIZERSINGLETON_H_
#define _INTENTRECOGNIZERSINGLETON_H_

#include "IntentFactory.hpp"

class IntentRecognizerSingleton final 
{
    private:
        IntentRecognizerSingleton() = default;
    public:
        static IntentRecognizerSingleton & Instance();
        std::string GetIntent(std::string& input) const;
        ~IntentRecognizerSingleton()=default;
        IntentRecognizerSingleton(const IntentRecognizerSingleton&) = delete;
        IntentRecognizerSingleton( IntentRecognizerSingleton&&) = delete;
        IntentRecognizerSingleton& operator=(const IntentRecognizerSingleton&) = delete;
        IntentRecognizerSingleton& operator=( IntentRecognizerSingleton&&) = delete;


};

#endif /* _INTENTRECOGNIZERSINGLETON_H_ */