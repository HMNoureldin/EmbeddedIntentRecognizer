#include "../inc/FactIntent.hpp"
#include "../inc/defs.hpp"

void FactIntent::Set(const std::string &input)
{
    if (std::regex_search(input, std::regex("fact")))
			m_intent = Intents::fact_intent;
}