#ifndef _DEFS_H_
#define _DEFS_H_

#include<string>

/// Different types of intents that system can recognize.
enum IntentType { NONE, WEATHER, FACT};


/// Command for clearing the CMD.
namespace Cmd{
    const std::string clear_cmd = "\033[2J\033[1;1H";
}

/// Different types of intents messages.
namespace Intents {
        const std::string weather_intent      = "Intent: Get Weather";
        const std::string weather_intent_city = "Intent: Get Weather City";
        const std::string fact_intent         = "Intent: Get Fact";
        const std::string unknown_intent      = "Intent: Unknown Intent";
    }

#endif /* _DEFS_H_ */