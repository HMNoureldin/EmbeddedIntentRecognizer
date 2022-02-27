#ifndef _INTENT_H_
#define _INTENT_H_

#include <string>
#include <regex>

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