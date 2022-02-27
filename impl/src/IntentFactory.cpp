#include "../inc/IntentFactory.hpp"
#include "../inc/WeatherIntent.hpp"
#include "../inc/FactIntent.hpp"


std::unique_ptr<Intent> IntentFactory::create(const IntentType& type) {
	
    std::unique_ptr<Intent> m_intent = nullptr;
	
	switch(type) {
		case IntentType::WEATHER:{
            m_intent = std::make_unique<WeatherIntent>();
			break;
		}
		case IntentType::FACT:{
            m_intent = std::make_unique<FactIntent>();
			break;
		}
		default:{
			break;
		}
	}
	return m_intent;
}