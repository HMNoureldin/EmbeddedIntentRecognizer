#include "../inc/FactIntent.hpp"
#include "../inc/defs.hpp"

void FactIntent::Set(const std::string &input)
{
    if (regex_search(input, regex("fact")))
			m_intent = Intents::fact_intent;
}