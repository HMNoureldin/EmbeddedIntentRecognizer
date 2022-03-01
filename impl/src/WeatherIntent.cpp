/** @file WeatherIntent.cpp
 *  @brief Predicting Weather intent.
 *
 *  Function definitions for predicting Weather intent corresponds to user input.
 *
 *  @author Hesham Noureldin
 */

#include "WeatherIntent.hpp"
#include "defs.hpp"

/**
 * Set Weather Intent String depending on the user input.
 *
 * @param input user input for weather intent recognetion.
 */

void WeatherIntent::Set(const std::string &input)
{
    if (std::regex_search(input, std::regex("weather")) && 
	    std::regex_search(input, std::regex("in")))
			m_intent = Intents::weather_intent_city;
	else if (std::regex_search(input, std::regex("weather")))
			m_intent = Intents::weather_intent;
}