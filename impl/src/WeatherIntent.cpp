#include "../inc/WeatherIntent.hpp"
#include "../inc/defs.hpp"

void WeatherIntent::Set(const std::string &input)
{
    if (std::regex_search(input, std::regex("weather")) && 
	    std::regex_search(input, std::regex("in")))
			m_intent = Intents::weather_intent_city;
	else if (std::regex_search(input, std::regex("weather")))
			m_intent = Intents::weather_intent;
}