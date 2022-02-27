#include "../inc/IntentRecognizer.hpp"
#include <algorithm>


std::string IntentRecognizer::GetIntent(std::string& input) const{

    // convert the input line to lower case for intent recognization check
	transform(input.begin(), input.end(), input.begin(), ::tolower);

    std::unique_ptr<Intent> m_intent = nullptr;

    if (std::regex_search(input, std::regex("weather"))){
        auto m_intent = IntentFactory::create(IntentType::WEATHER);
        m_intent->Set(input);
        return m_intent->Get();
    }	
	else if (std::regex_search(input, std::regex("fact"))){
        auto m_intent = IntentFactory::create(IntentType::FACT);
        m_intent->Set(input);
        return m_intent->Get();
    }
    return "Intent: Unknown Intent";

}


