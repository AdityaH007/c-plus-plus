// VARIABLES 

// Stored either in stack or heap

#include <iostream>

int main() 
{
    int variable = 8; //stack
    int* ptr = new int; //heap
    unsigned int a;
    //unsigned can be added to any datatype to make it positive
    auto b = 5; //automatically assigns the datatype

    std::cout << variable << std::endl;
} //stack variable is destroyed here, heap variable is not
//stack is faster, heap is slower
//stack is limited, heap is not
//stack is automatically managed, heap is not
//stack is not fragmented, heap is
//stack is thread specific, heap is not
//stack is more secure, heap is not

void datatypes()
{
char, short, int, long, long long;
float, double, long double, bool, void, wchar_t;
//char is 1 byte, short is 2 bytes, int is 4 bytes, long is 4 bytes, long long is 8 bytes
//float is 4 bytes, double is 8 bytes, long double is 8 bytes
//bool is 1 byte, void is 1 byte, wchar_t is 2 bytes
//cannot adress a single bit in memory only byte is accessible 
}
