//references are aliases for objects
//
//
#include <iostream>


void increment(int& value) //pass by reference
{
    value++;
}//normal call will make a copy of value , but here we are passing reference to value
//so we are changing the original value
//

// passing pointer to function
 void decrement(int* value)
 {
     (*value)--; //dereferencing pointer
                 //if we dont reference , it will increment mem add

 }
int main()
{
    int a = 5;
    int& ref = a; //reference to a
                  
    ref = 2; //changing value of a
             //if we comppile this , 2 variable wont be creaated
             //ref is just an alias to a, it actually doesnt exist

    increment(a);
    decrement(&a); //passing address of a

    //once we declare a ref, we cant chnage what its referecning

    std::cin.get();
}
