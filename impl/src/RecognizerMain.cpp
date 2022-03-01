/** @file RecognizerMain.cpp
 *  @brief Main Application.
 *
 *   Main Application logic which test user intent recognetion.
 *
 *  @author Hesham Noureldin
 */


#include "CommandLineSingleton.hpp"
#include "IntentRecognizerSingleton.hpp"
#include "defs.hpp"
#include <memory>
#include <optional>

int main()
{
    /// clear commandline.
    CommandLineSingleton::Instance().Clear();

    /// Display user messages
    CommandLineSingleton::Instance().MsgDisplay("****** Embedded Intent Recognizer ****** \n");
    CommandLineSingleton::Instance().MsgDisplay(">> Please insert your inquiry ?? \n");

    std::string input;
    std::optional<std::string> intent;

    do
    {   /// Take input from user for prediction.
        input = CommandLineSingleton::Instance().InputFromUser();
        /// Get Intent corresponds to the user input.
        intent = IntentRecognizerSingleton::Instance().GetIntent(input);
        /// Display Predicted intent on the commandlines.
        CommandLineSingleton::Instance().MsgDisplay(intent.has_value() ? intent.value() : Intents::unknown_intent);


    } while (input != "exit");

    CommandLineSingleton::Instance().MsgDisplay("Goodbye!!\n");

    return 0;
}