#include "../inc/IntentRecognizerSingleton.hpp"
#include <algorithm>

IntentRecognizerSingleton &IntentRecognizerSingleton::Instance()
{
    static IntentRecognizerSingleton instance;
    return instance;
}

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
