#include <iostream>
#pragma once // This is a preprocessor directive that tells the compiler to include the header file only once in the compilation process. This is to prevent multiple definitions of the same function or variable.

int multiply(int a,int b)
{
    return a*b;
}
void pnt()
{
    std::cout<<"Woah!"<<std::endl;
}

void Log(const char* message)
{
    std::cout<<message<<std::endl;
}

int main()
{
    int a=5;
    auto b=6;
    std::cout<<multiply(a,b)<<std::endl;
    pnt();

    return 0;
}
