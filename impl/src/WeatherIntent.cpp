#include "../inc/WeatherIntent.hpp"
#include "../inc/defs.hpp"

void WeatherIntent::Set(const std::string &input)
{
    if (regex_search(input, regex("weather")) && regex_search(input, regex("in")))
			m_intent = Intents::weather_intent_city;
	else if (regex_search(input, regex("weather")))
			m_intent = Intents::weather_intent;
}