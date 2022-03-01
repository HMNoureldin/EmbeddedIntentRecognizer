/** @file IntentRecognizerSingleton.cpp
 *  @brief Function definitions to abstract IntentFactory.
 *
 *  This contains the definitions
 *  which abstract IntentFactory functions
 *
 *  @author Hesham Noureldin
 */


#include "IntentRecognizerSingleton.hpp"
#include <algorithm>

/**
 * Get singelton class unique instance of IntentRecognizerSingleton.
 *
 * @return IntentRecognizerSingleton instance
 */
IntentRecognizerSingleton &IntentRecognizerSingleton::Instance()
{
    static IntentRecognizerSingleton instance;
    return instance;
}


/**
 * Get intent string depending on the user input.
 *
 * @param input string to be recognized.
 * @return intent string predicted from the input.
 */
std::optional<std::string> IntentRecognizerSingleton::GetIntent(std::string &input)
{

    // convert the input line to lower case for intent recognization check
    transform(input.begin(), input.end(), input.begin(), ::tolower);

    std::unique_ptr<Intent> m_intent = nullptr;
    std::optional<std::string> intent_result;

    if (std::regex_search(input, std::regex("weather")))
    {
        auto m_intent = IntentFactory::create(IntentType::WEATHER);
        m_intent->Set(input);
        intent_result =  m_intent->Get();
    }
    else if (std::regex_search(input, std::regex("fact")))
    {
        auto m_intent = IntentFactory::create(IntentType::FACT);
        m_intent->Set(input);
        intent_result =  m_intent->Get();
    }
    else
    {
       intent_result =  {};
    }
    return intent_result;
}
