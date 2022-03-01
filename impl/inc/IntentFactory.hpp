/** @file IntentFactory.hpp
 *  @brief Generate intent object.
 *
 *  Function prototypes for Generate intent object corresponds to user input.
 *
 *  @author Hesham Noureldin
 */


#ifndef _INTENTFACTORY_H_
#define _INTENTFACTORY_H_

#include "Intent.hpp"
#include "defs.hpp"
#include <memory> 


/**
 * Class for generating Intent object.
 *
 * This class to generating Intent object corresponds to the type.
 */

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