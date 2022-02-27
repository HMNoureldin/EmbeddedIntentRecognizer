#ifndef _DEFS_H_
#define _DEFS_H_

#include<string>

enum IntentType { NONE, WEATHER, FACT};


namespace Cmd{
    const std::string clear_cmd = "\033[2J\033[1;1H";
}

namespace Intents {
        const std::string weather_intent      = "Get Weather";
        const std::string weather_intent_city = "Get Weather City";
        const std::string fact_intent         = "Get Fact";
        const std::string unknown_intent      = "Unknown Intent";
    }

#endif /* _DEFS_H_ */