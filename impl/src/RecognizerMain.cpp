#include "../inc/CommandLineSingleton.hpp"
#include "../inc/IntentFactory.hpp"
#include "../inc/Intent.hpp"




int main(){

    CommandLineSingleton::Instance().Clear();
    
    std::cout << "****** Embedded Intent Recognizer ******" << std::endl << std::endl;	
    std::cout << ">> Please insert your inquiry ?? " << std::endl<< std::endl;

    std:: string input;

	do {
        input = CommandLineSingleton::Instance().InputFromUser();
		
        if (std::regex_search(input, std::regex("weather"))){
            auto intent = IntentFactory::create(IntentType::WEATHER);
            intent->Set(input);
            CommandLineSingleton::Instance().MsgDisplay(intent->Get());

        }	
		else if (std::regex_search(input, std::regex("fact"))){
            auto intent = IntentFactory::create(IntentType::FACT);
            intent->Set(input);
            CommandLineSingleton::Instance().MsgDisplay(intent->Get());

        }
		else if (std::regex_search(input, std::regex("exit"))){
			CommandLineSingleton::Instance().MsgDisplay("Exit");
        }
		else{

            CommandLineSingleton::Instance().MsgDisplay("Unknown Intent");
        }

	} while (input != "exit");

    return 0;
}