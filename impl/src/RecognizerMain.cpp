#include "../inc/CommandLineSingleton.hpp"
#include "../inc/IntentRecognizerSingleton.hpp"
#include "../inc/defs.hpp"
#include <memory>
#include <optional>

int main()
{

    CommandLineSingleton::Instance().Clear();

    CommandLineSingleton::Instance().MsgDisplay("****** Embedded Intent Recognizer ****** \n");
    CommandLineSingleton::Instance().MsgDisplay(">> Please insert your inquiry ?? \n");

    std::string input;
    std::optional<std::string> intent;

    do
    {
        input = CommandLineSingleton::Instance().InputFromUser();
        intent = IntentRecognizerSingleton::Instance().GetIntent(input);
        CommandLineSingleton::Instance().MsgDisplay(intent.has_value() ? intent.value() : Intents::unknown_intent);


    } while (input != "exit");

    CommandLineSingleton::Instance().MsgDisplay("Goodbye!!\n");

    return 0;
}