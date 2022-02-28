# EmbeddedIntentRecognizer

# What is intent recognition?

An intent is something the user wants to do: book a flight, check the weather, or make a call.
Using intent recognition, your applications, tools, and devices can determine what the user wants
to initiate or do based on options you define in the Intent Recognizer.

# Application Description:
This is the command line tool which offers intension of the user's demand.
It means that it can recognize the intension of the demand and get the further details.
Below are the few examples.
   - What is the weather like today? => Prints (Intent: Get Weather)
   - What is the weather like in Paris today? => Prints (Intent: Get Weather City)
   - Tell me an interesting fact. => Prints (Intent: Get Fact)

# Dependencies:
- Cmake verison (minimum 3.0.0) ---> sudo apt-get install cmake.
- Latest g++ compiler that supports C++ 17 langauge features.
- gtest library ---> sudo apt-get install libgtest-dev.


# Building the main application:
 - Clone the repo.
 - mkdir build && cd build
 - cmake ..
 - make

# Running the main application:
From the repo directorry do the following :
- cd ./build
- run "./IntentRecognizer"

# Building the test application:
  From the repo directorry do the following :
 - cd ./UnitTest
 - mkdir build && cd build
 - cmake ..
 - make

# Running the test application:
From the repo directorry do the following :
- cd ./UnitTest/build
- run "./TestIntentRecognizer"
