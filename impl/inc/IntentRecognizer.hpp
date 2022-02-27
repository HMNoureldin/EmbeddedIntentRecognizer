#ifndef _INTENTRECOGNIZER_H_
#define _INTENTRECOGNIZER_H_

#include "IntentFactory.hpp"

class IntentRecognizer final 
{
    public:
        IntentRecognizer()=default;
        ~IntentRecognizer()=default;
        std::string GetIntent(std::string& input) const;
        IntentRecognizer(const  IntentRecognizer&) = delete;
        IntentRecognizer( IntentRecognizer&&) = delete;
        IntentRecognizer& operator=(const  IntentRecognizer&) = delete;
        IntentRecognizer& operator=( IntentRecognizer&&) = delete;


};

#endif /* _INTENTRECOGNIZER_H_ */