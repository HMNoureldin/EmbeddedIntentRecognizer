#include "../inc/CommandLineSingleton.hpp"
#include "../inc/IntentFactory.hpp"
#include "../inc/Intent.h"


int main(){
    
    std::cout << "****** Embedded Intent Recognizer ******" << std::endl << std::endl;	
    std::cout << ">> Please insert your inquiry ?? " << endl;

    std:: string input;
    CommandLineSingleton::Instance().Clear();
	do {
        input = CommandLineSingleton::Instance().InputFromUser();
		
        if (regex_search(input, regex("weather"))){
            auto intent = IntentFactory::create(IntentType::WEATHER);
            intent.Set(input);
            CommandLineSingleton::Instance().MsgDisplay(intent.Get());

        }	
		else if (regex_search(input, regex("fact"))){
            auto intent = IntentFactory::create(IntentType::FACT);
            intent.Set(input);
            CommandLineSingleton::Instance().MsgDisplay(intent.Get());

        }
		else if (regex_search(input, regex("exit")))
			CommandLineSingleton::Instance().MsgDisplay("Exit");
		else
			auto intent = IntentFactory::create(IntentType::NONE);
            intent.Set(input);
            CommandLineSingleton::Instance().MsgDisplay(intent.Get());

	} while (input != "exit");

    return 0;
}