/** @file IntentRecognizerSingleton.hpp
 *  @brief Function prototypes to abstract IntentFactory.
 *
 *  This contains the prototypes
 *  which abstract IntentFactory functions
 *
 *  @author Hesham Noureldin
 */


#ifndef _INTENTRECOGNIZERSINGLETON_H_
#define _INTENTRECOGNIZERSINGLETON_H_

#include "IntentFactory.hpp"
#include <optional>

/**
 * Class for abstracting IntentFactory.
 *
 * This class to gurante that there is only one instance of itself to be used 
 * by the application user. It provides abstraction of IntentFactory functions.
 */


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