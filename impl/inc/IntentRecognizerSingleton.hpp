#ifndef _INTENTRECOGNIZERSINGLETON_H_
#define _INTENTRECOGNIZERSINGLETON_H_

#include "IntentFactory.hpp"
#include <optional>


class IntentRecognizerSingleton final
{
private:
    IntentRecognizerSingleton() = default;

public:
    static IntentRecognizerSingleton &Instance();
    std::optional<std::string> GetIntent(std::string &input);
    ~IntentRecognizerSingleton() = default;
    IntentRecognizerSingleton(const IntentRecognizerSingleton &) = delete;
    IntentRecognizerSingleton(IntentRecognizerSingleton &&) = delete;
    IntentRecognizerSingleton &operator=(const IntentRecognizerSingleton &) = delete;
    IntentRecognizerSingleton &operator=(IntentRecognizerSingleton &&) = delete;
};

#endif /* _INTENTRECOGNIZERSINGLETON_H_ */