/** @file FactIntent.cpp
 *  @brief Predicting fact intent.
 *
 *  Function definitions for predicting fact intent corresponds to user input.
 *
 *  @author Hesham Noureldin
 */

#include "../inc/FactIntent.hpp"
#include "../inc/defs.hpp"

/**
 * Set Fact Intent String depending on the user input.
 *
 * @param input user input for fact intent recognetion.
 */

void FactIntent::Set(const std::string &input)
{
    if (std::regex_search(input, std::regex("fact")))
			m_intent = Intents::fact_intent;
}