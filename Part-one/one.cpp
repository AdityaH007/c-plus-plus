#include <iostream>
#include "Log.cpp"
//or use declaration
//void Log(const char* message);


static int multiply(int a, int b) {
    return a * b;
} //static functions are only available in this file

int main() {
    Log("Hello World!");
    std::cin.get(); //holdss the screen until a key is pressed
    return 0;
#include "endbrace.h"
