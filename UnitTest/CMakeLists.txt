cmake_minimum_required(VERSION 3.0.0)
project(example VERSION 0.1.0)

find_package (GTest REQUIRED)
set(SRC_FILES 
    TestIntentRecognizer.cpp
    ../impl/src/IntentRecognizerSingleton.cpp
    ../impl/src/IntentFactory.cpp
    ../impl/src/WeatherIntent.cpp
    ../impl/src/FactIntent.cpp)
add_executable(TestIntentRecognizer ${SRC_FILES})
target_include_directories(TestIntentRecognizer PRIVATE ../impl/inc/)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_FLAGS -std=c++17)
set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})

target_link_libraries(TestIntentRecognizer PRIVATE GTest::GTest GTest::Main)


include(CPack)
