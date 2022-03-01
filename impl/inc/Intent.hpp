/** @file Intent.hpp
 *  @brief Function prototypes to abstract Intents.
 *
 *  This contains the prototypes
 *  which abstract Intents to be overided depending on the type to be recognized.
 *
 *  @author Hesham Noureldin
 */

#ifndef _INTENT_H_
#define _INTENT_H_

#include <string>
#include <regex>


/**
 * Class for abstracting Intents.
 *
 * This abstract class to provide a method to be overrid depending on Intent type.
 */
class Intent
{
	protected:
		std::string m_intent;
	public:
        Intent() = default;
        virtual ~Intent() = default;
        virtual void Set(const std::string &)=0;
        std::string Get()const {
            return m_intent;
        }
};

#endif /* _INTENT_H_ */