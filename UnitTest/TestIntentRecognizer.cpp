#include "gtest/gtest.h"
#include "../impl/inc/IntentRecognizerSingleton.hpp"
#include "../impl/inc/defs.hpp"
#include <memory>


//Test cases for Weather intent.
TEST(TestIntentRecognizer, WeatherCaseSmall_TestCase) {
    std::string input = "What is the Weather like today?";
    std::string intent = IntentRecognizerSingleton::Instance().GetIntent(input);
    EXPECT_EQ(Intents::weather_intent , intent);

}

TEST(TestIntentRecognizer, WeatherCapital_TestCase) {
    std::string input = "WHAT IS THE WEATHER LIKE TOMMOROW?";
    std::string intent = IntentRecognizerSingleton::Instance().GetIntent(input);
    EXPECT_EQ(Intents::weather_intent , intent);
}

TEST(TestIntentRecognizer, OnlyWeatherCapital_TestCase) {
    std::string input = "What is the WEATHER like today?";
    std::string intent = IntentRecognizerSingleton::Instance().GetIntent(input);
    EXPECT_EQ(Intents::weather_intent , intent);
}

TEST(TestIntentRecognizer, OnlyWeatherWord_TestCase) {
    std::string input = "WEATHER";
    std::string intent = IntentRecognizerSingleton::Instance().GetIntent(input);
    EXPECT_EQ(Intents::weather_intent , intent);
}


TEST(TestIntentRecognizer, WeatherNoSpaces_TestCase) {
    std::string input = "Whatistheweathertoday?";
    std::string intent = IntentRecognizerSingleton::Instance().GetIntent(input);
    EXPECT_EQ(Intents::weather_intent , intent);
}


//Test cases for Weather City intent.
TEST(TestIntentRecognizer, WeatherCityCaseSmall_TestCase) {
    std::string input = "What is the Weather like in paris today?";
    std::string intent = IntentRecognizerSingleton::Instance().GetIntent(input);
    EXPECT_EQ(Intents::weather_intent_city , intent);
}

TEST(TestIntentRecognizer, WeatherCityCapital_TestCase) {
    std::string input = "WHAT IS THE WEATHER LIKE IN PARIS TOMMOROW?";
    std::string intent = IntentRecognizerSingleton::Instance().GetIntent(input);
    EXPECT_EQ(Intents::weather_intent_city , intent);
}

TEST(TestIntentRecognizer, OnlyWeatherCityCapital_TestCase) {
    std::string input = "What is the WEATHER like In egypt today?";
    std::string intent = IntentRecognizerSingleton::Instance().GetIntent(input);
    EXPECT_EQ(Intents::weather_intent_city , intent);
}

TEST(TestIntentRecognizer, OnlyWeatherIN_TestCase) {
    std::string input = "WEATHER IN";
    std::string intent = IntentRecognizerSingleton::Instance().GetIntent(input);
    EXPECT_EQ(Intents::weather_intent_city , intent);
}

TEST(TestIntentRecognizer, WeatherCityNoSpaces_TestCase) {
    std::string input = "WhatistheWeatherlikeinparistoday?";
    std::string intent = IntentRecognizerSingleton::Instance().GetIntent(input);
    EXPECT_EQ(Intents::weather_intent_city , intent);
}


//Test cases for Fact intent.
TEST(TestIntentRecognizer, FactCaseSmall_TestCase) {
    std::string input = "tell me an interesting fact.";
    std::string intent = IntentRecognizerSingleton::Instance().GetIntent(input);
    EXPECT_EQ(Intents::fact_intent , intent);
}

TEST(TestIntentRecognizer, FactCapital_TestCase) {
    std::string input = "TELL ME AN INTERESTING FACT";
    std::string intent = IntentRecognizerSingleton::Instance().GetIntent(input);
    EXPECT_EQ(Intents::fact_intent , intent);
}

TEST(TestIntentRecognizer, OnlyFactCapital_TestCase) {
    std::string input = "tell me an interesting FACT";
    std::string intent = IntentRecognizerSingleton::Instance().GetIntent(input);
    EXPECT_EQ(Intents::fact_intent , intent);
}

TEST(TestIntentRecognizer, OnlyFactWord_TestCase) {
    std::string input = "FACT";
    std::string intent = IntentRecognizerSingleton::Instance().GetIntent(input);
    EXPECT_EQ(Intents::fact_intent , intent);
}


TEST(TestIntentRecognizer, FactNoSpaces_TestCase) {
    std::string input = "tellmeaninterestingfact.";
    std::string intent = IntentRecognizerSingleton::Instance().GetIntent(input);
    EXPECT_EQ(Intents::fact_intent , intent);
}

// Invalid Test Cases
TEST(TestIntentRecognizer, RandomPhrase_TestCase) {
    std::string input = "Hello This is Hesham Noureldin, I Live In Ingolstdat.";
    std::string intent = IntentRecognizerSingleton::Instance().GetIntent(input);
    EXPECT_EQ(Intents::unknown_intent , intent);
}

TEST(TestIntentRecognizer, EmptyPhrase_TestCase) {
    std::string input = "";
    std::string intent = IntentRecognizerSingleton::Instance().GetIntent(input);
    EXPECT_EQ(Intents::unknown_intent , intent);
}


int main() {
    ::testing::InitGoogleTest();
    return RUN_ALL_TESTS();
}