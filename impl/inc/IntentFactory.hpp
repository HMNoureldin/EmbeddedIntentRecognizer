#ifndef _INTENTFACTORY_H_
#define _INTENTFACTORY_H_

#include "../inc/Intent.hpp"
#include "../inc/defs.hpp"
#include <memory> 


class IntentFactory final {
	public:

        IntentFactory()=default;
        ~IntentFactory()=default;
        IntentFactory(const  IntentFactory&) = delete;
        IntentFactory( IntentFactory&&) = delete;
        IntentFactory& operator=(const  IntentFactory&) = delete;
        IntentFactory& operator=( IntentFactory&&) = delete;
		// Factory Method
		static std::unique_ptr<Intent> create(const IntentType&);
        
};

#endif /* _INTENTFACTORY_H_ */