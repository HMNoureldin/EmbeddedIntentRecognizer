#include "gtest/gtest.h"
#include "../impl/inc/IntentRecognizer.hpp"
#include "../impl/inc/defs.hpp"
#include <memory>



class TestIntentRecognizer : public ::testing::Test {
public:
    std::unique_ptr<IntentRecognizer> m_recognizer =nullptr;
    virtual void SetUp() override {
        m_recognizer = std::make_unique<IntentRecognizer>();
    }
};

//Test cases for Weather intent.
TEST_F(TestIntentRecognizer, WeatherCaseSmall_TestCase) {
    std::string input = "What is the Weather like today?";
    if(m_recognizer) {
        std::string intent = m_recognizer->GetIntent(input);
        EXPECT_EQ(Intents::weather_intent , intent);
    }
}

TEST_F(TestIntentRecognizer, WeatherCapital_TestCase) {
    std::string input = "WHAT IS THE WEATHER LIKE TOMMOROW?";
    if(m_recognizer) {
        std::string intent = m_recognizer->GetIntent(input);
        EXPECT_EQ(Intents::weather_intent , intent);
    }
}

TEST_F(TestIntentRecognizer, OnlyWeatherCapital_TestCase) {
    std::string input = "What is the WEATHER like today?";
    if(m_recognizer) {
        std::string intent = m_recognizer->GetIntent(input);
        EXPECT_EQ(Intents::weather_intent , intent);
    }
}

TEST_F(TestIntentRecognizer, OnlyWeatherWord_TestCase) {
    std::string input = "WEATHER";
    if(m_recognizer) {
        std::string intent = m_recognizer->GetIntent(input);
        EXPECT_EQ(Intents::weather_intent , intent);
    }
}


TEST_F(TestIntentRecognizer, WeatherNoSpaces_TestCase) {
    std::string input = "Whatistheweathertoday?";
    if(m_recognizer) {
        std::string intent = m_recognizer->GetIntent(input);
        EXPECT_EQ(Intents::weather_intent , intent);
    }
}


//Test cases for Weather City intent.
TEST_F(TestIntentRecognizer, WeatherCityCaseSmall_TestCase) {
    std::string input = "What is the Weather like in paris today?";
    if(m_recognizer) {
        std::string intent = m_recognizer->GetIntent(input);
        EXPECT_EQ(Intents::weather_intent_city , intent);
    }
}

TEST_F(TestIntentRecognizer, WeatherCityCapital_TestCase) {
    std::string input = "WHAT IS THE WEATHER LIKE IN PARIS TOMMOROW?";
    if(m_recognizer) {
        std::string intent = m_recognizer->GetIntent(input);
        EXPECT_EQ(Intents::weather_intent_city , intent);
    }
}

TEST_F(TestIntentRecognizer, OnlyWeatherCityCapital_TestCase) {
    std::string input = "What is the WEATHER like In egypt today?";
    if(m_recognizer) {
        std::string intent = m_recognizer->GetIntent(input);
        EXPECT_EQ(Intents::weather_intent_city , intent);
    }
}

TEST_F(TestIntentRecognizer, OnlyWeatherIN_TestCase) {
    std::string input = "WEATHER IN";
    if(m_recognizer) {
        std::string intent = m_recognizer->GetIntent(input);
        EXPECT_EQ(Intents::weather_intent_city , intent);
    }
}

TEST_F(TestIntentRecognizer, WeatherCityNoSpaces_TestCase) {
    std::string input = "WhatistheWeatherlikeinparistoday?";
    if(m_recognizer) {
        std::string intent = m_recognizer->GetIntent(input);
        EXPECT_EQ(Intents::weather_intent_city , intent);
    }
}


//Test cases for Fact intent.
TEST_F(TestIntentRecognizer, FactCaseSmall_TestCase) {
    std::string input = "tell me an interesting fact.";
    if(m_recognizer) {
        std::string intent = m_recognizer->GetIntent(input);
        EXPECT_EQ(Intents::fact_intent , intent);
    }
}

TEST_F(TestIntentRecognizer, FactCapital_TestCase) {
    std::string input = "TELL ME AN INTERESTING FACT";
    if(m_recognizer) {
        std::string intent = m_recognizer->GetIntent(input);
        EXPECT_EQ(Intents::fact_intent , intent);
    }
}

TEST_F(TestIntentRecognizer, OnlyFactCapital_TestCase) {
    std::string input = "tell me an interesting FACT";
    if(m_recognizer) {
        std::string intent = m_recognizer->GetIntent(input);
        EXPECT_EQ(Intents::fact_intent , intent);
    }
}

TEST_F(TestIntentRecognizer, OnlyFactWord_TestCase) {
    std::string input = "FACT";
    if(m_recognizer) {
        std::string intent = m_recognizer->GetIntent(input);
        EXPECT_EQ(Intents::fact_intent , intent);
    }
}


TEST_F(TestIntentRecognizer, FactNoSpaces_TestCase) {
    std::string input = "tellmeaninterestingfact.";
    if(m_recognizer) {
        std::string intent = m_recognizer->GetIntent(input);
        EXPECT_EQ(Intents::fact_intent , intent);
    }
}

// Invalid Test Cases

TEST_F(TestIntentRecognizer, RandomPhrase_TestCase) {
    std::string input = "Hello This is Hesham Noureldin, I Live In Ingolstdat.";
    if(m_recognizer) {
        std::string intent = m_recognizer->GetIntent(input);
        EXPECT_EQ(Intents::unknown_intent , intent);
    }
}

TEST_F(TestIntentRecognizer, EmptyPhrase_TestCase) {
    std::string input = "";
    if(m_recognizer) {
        std::string intent = m_recognizer->GetIntent(input);
        EXPECT_EQ(Intents::unknown_intent , intent);
    }
}


int main() {
    ::testing::InitGoogleTest();
    return RUN_ALL_TESTS();
}