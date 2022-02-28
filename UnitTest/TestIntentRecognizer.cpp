#include "gtest/gtest.h"
#include "../impl/inc/IntentRecognizerSingleton.hpp"
#include "../impl/inc/defs.hpp"
#include <memory>
#include <optional>

//Test cases for Weather intent.
TEST(TestIntentRecognizer, WeatherCaseSmall_TestCase) {
    std::string input = "What is the Weather like today?";
    std::optional<std::string> intent = IntentRecognizerSingleton::Instance().GetIntent(input);
    EXPECT_EQ(Intents::weather_intent , intent.has_value() ? intent.value() : Intents::unknown_intent);

}

TEST(TestIntentRecognizer, WeatherCapital_TestCase) {
    std::string input = "WHAT IS THE WEATHER LIKE TOMMOROW?";
    std::optional<std::string> intent = IntentRecognizerSingleton::Instance().GetIntent(input);
    EXPECT_EQ(Intents::weather_intent , intent.has_value() ? intent.value() : Intents::unknown_intent);
}

TEST(TestIntentRecognizer, OnlyWeatherCapital_TestCase) {
    std::string input = "What is the WEATHER like today?";
    std::optional<std::string> intent = IntentRecognizerSingleton::Instance().GetIntent(input);
    EXPECT_EQ(Intents::weather_intent , intent.has_value() ? intent.value() : Intents::unknown_intent);
}

TEST(TestIntentRecognizer, OnlyWeatherWord_TestCase) {
    std::string input = "WEATHER";
    std::optional<std::string> intent = IntentRecognizerSingleton::Instance().GetIntent(input);
    EXPECT_EQ(Intents::weather_intent , intent.has_value() ? intent.value() : Intents::unknown_intent);
}


TEST(TestIntentRecognizer, WeatherNoSpaces_TestCase) {
    std::string input = "Whatistheweathertoday?";
    std::optional<std::string> intent = IntentRecognizerSingleton::Instance().GetIntent(input);
    EXPECT_EQ(Intents::weather_intent , intent.has_value() ? intent.value() : Intents::unknown_intent);
}


//Test cases for Weather City intent.
TEST(TestIntentRecognizer, WeatherCityCaseSmall_TestCase) {
    std::string input = "What is the Weather like in paris today?";
    std::optional<std::string> intent = IntentRecognizerSingleton::Instance().GetIntent(input);
    EXPECT_EQ(Intents::weather_intent_city , intent.has_value() ? intent.value() : Intents::unknown_intent);
}

TEST(TestIntentRecognizer, WeatherCityCapital_TestCase) {
    std::string input = "WHAT IS THE WEATHER LIKE IN PARIS TOMMOROW?";
    std::optional<std::string> intent = IntentRecognizerSingleton::Instance().GetIntent(input);
    EXPECT_EQ(Intents::weather_intent_city , intent.has_value() ? intent.value() : Intents::unknown_intent);
}

TEST(TestIntentRecognizer, OnlyWeatherCityCapital_TestCase) {
    std::string input = "What is the WEATHER like In egypt today?";
    std::optional<std::string> intent = IntentRecognizerSingleton::Instance().GetIntent(input);
    EXPECT_EQ(Intents::weather_intent_city , intent.has_value() ? intent.value() : Intents::unknown_intent);
}

TEST(TestIntentRecognizer, OnlyWeatherIN_TestCase) {
    std::string input = "WEATHER IN";
    std::optional<std::string> intent = IntentRecognizerSingleton::Instance().GetIntent(input);
    EXPECT_EQ(Intents::weather_intent_city , intent.has_value() ? intent.value() : Intents::unknown_intent);
}

TEST(TestIntentRecognizer, WeatherCityNoSpaces_TestCase) {
    std::string input = "WhatistheWeatherlikeinparistoday?";
    std::optional<std::string> intent = IntentRecognizerSingleton::Instance().GetIntent(input);
    EXPECT_EQ(Intents::weather_intent_city , intent.has_value() ? intent.value() : Intents::unknown_intent);
}


//Test cases for Fact intent.
TEST(TestIntentRecognizer, FactCaseSmall_TestCase) {
    std::string input = "tell me an interesting fact.";
    std::optional<std::string> intent = IntentRecognizerSingleton::Instance().GetIntent(input);
    EXPECT_EQ(Intents::fact_intent , intent.has_value() ? intent.value() : Intents::unknown_intent);
}

TEST(TestIntentRecognizer, FactCapital_TestCase) {
    std::string input = "TELL ME AN INTERESTING FACT";
    std::optional<std::string> intent = IntentRecognizerSingleton::Instance().GetIntent(input);
    EXPECT_EQ(Intents::fact_intent , intent.has_value() ? intent.value() : Intents::unknown_intent);
}

TEST(TestIntentRecognizer, OnlyFactCapital_TestCase) {
    std::string input = "tell me an interesting FACT";
    std::optional<std::string> intent = IntentRecognizerSingleton::Instance().GetIntent(input);
    EXPECT_EQ(Intents::fact_intent , intent.has_value() ? intent.value() : Intents::unknown_intent);
}

TEST(TestIntentRecognizer, OnlyFactWord_TestCase) {
    std::string input = "FACT";
    std::optional<std::string> intent = IntentRecognizerSingleton::Instance().GetIntent(input);
    EXPECT_EQ(Intents::fact_intent , intent.has_value() ? intent.value() : Intents::unknown_intent);
}


TEST(TestIntentRecognizer, FactNoSpaces_TestCase) {
    std::string input = "tellmeaninterestingfact.";
    std::optional<std::string> intent = IntentRecognizerSingleton::Instance().GetIntent(input);
    EXPECT_EQ(Intents::fact_intent , intent.has_value() ? intent.value() : Intents::unknown_intent);
}

// Invalid Test Cases
TEST(TestIntentRecognizer, RandomPhrase_TestCase) {
    std::string input = "Hello This is Hesham Noureldin, I Live In Ingolstdat.";
    std::optional<std::string> intent = IntentRecognizerSingleton::Instance().GetIntent(input);
    EXPECT_EQ(Intents::unknown_intent , intent.has_value() ? intent.value() : Intents::unknown_intent);
}

TEST(TestIntentRecognizer, EmptyPhrase_TestCase) {
    std::string input = "";
    std::optional<std::string> intent = IntentRecognizerSingleton::Instance().GetIntent(input);
    EXPECT_EQ(Intents::unknown_intent , intent.has_value() ? intent.value() : Intents::unknown_intent);
}


int main() {
    ::testing::InitGoogleTest();
    return RUN_ALL_TESTS();
}