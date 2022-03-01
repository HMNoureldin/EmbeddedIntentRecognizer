/** @file IntentFactory.cpp
 *  @brief Generate intent object.
 *
 *  Function definitions for Generate intent object corresponds to user input.
 *
 *  @author Hesham Noureldin
 */


#include "IntentFactory.hpp"
#include "WeatherIntent.hpp"
#include "FactIntent.hpp"

/**
 * Generate Intent object depending on the type inserted by the user.
 *
 * @param type Intent type inserted by the user.
 * @return Intent Object corresponding to the type.
 */

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
	return std::move(m_intent);
}