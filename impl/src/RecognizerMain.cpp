#include "../inc/CommandLineSingleton.hpp"

int main(){

    /* Command line instance */
    CommandLineSingleton::Instance().MsgDisplay("Embedde Intent Recognizer");
    CommandLineSingleton::Instance().MsgDisplay("Embedde Intent Recognizer");
    CommandLineSingleton::Instance().Clear();

    return 0;
}