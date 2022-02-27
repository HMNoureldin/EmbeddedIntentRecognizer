#include "../inc/CommandLineSingleton.hpp"
#include "../inc/IntentRecognizer.hpp"
#include <memory>


int main(){

    CommandLineSingleton::Instance().Clear();
    
    CommandLineSingleton::Instance().MsgDisplay("****** Embedded Intent Recognizer ****** \n");
    CommandLineSingleton::Instance().MsgDisplay(">> Please insert your inquiry ?? \n");

    std:: string input;
    std:: string intent;
    std::unique_ptr<IntentRecognizer> recognizer = std::make_unique<IntentRecognizer>();

	do {
        input = CommandLineSingleton::Instance().InputFromUser();
        intent = recognizer->GetIntent(input);
        CommandLineSingleton::Instance().MsgDisplay(intent);

	} while (input != "exit");

    CommandLineSingleton::Instance().MsgDisplay("Goodbye!!\n");

    return 0;
}