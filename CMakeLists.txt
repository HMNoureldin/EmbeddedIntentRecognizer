cmake_minimum_required(VERSION 3.0.0)
project(example VERSION 0.1.0)

include(CTest)
enable_testing()

add_executable(IntentRecognizer impl/src/RecognizerMain.cpp impl/src/CommandLineSingleton.cpp impl/src/IntentFactory.cpp impl/src/WeatherIntent.cpp impl/src/FactIntent.cpp impl/src/IntentRecognizerSingleton.cpp)
target_include_directories(IntentRecognizer PRIVATE impl/inc/)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_FLAGS -std=c++17)
set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
