#include <iostream>
#include <memory>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;



[1]: unique_ptr<> to represent unqiue ownership
[2]: shared_ptr<> to represent shared ownerhsip

these are smart pointers , and is used to prevent memory leaks


void f(int i, int j)
{
    X* p=new X; //allocate a new X
    unique_ptr<X>sp {new X}; //allocate a new X and give its pointer to unique_ptr
    
    if (i<99) throw Z{}; //throw an exception (maybe)
    if(j<77) return; // may return "early" 

    p -> do_something(); //throw exception
    sp -> do_something(); //throw exception

    delete p;
}

//if we use unique pointer p will be destroyed when we exit f() , we dont need to do it manually

void foo(int i , int j)
{
    auto X;
    
    //passsing free store allocated objects in and out of the function
    unique_ptr<X> make_X(int i)
        //make and X and give it to a unique pointer 
    {
        // ..
        return unique_ptr<X>{new X{i}};
    }
}

int main()
{

}

