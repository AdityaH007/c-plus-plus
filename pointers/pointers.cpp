//pointers are used to store the address of another variable


#include <cstddef>
#include <iostream>

#define LOG(x) std::cout<<x<<std::endl

int main()
{
    void* ptr = nullptr; //we dont need to give type to pointer, completely useless
//types are helpful for manipulation of memory
    int var = 8;
    void *ptr2 = &var; //pointer to var , & is address of operator

    //dereferencing
    *ptr2 = 10; //error: void* is not a pointer to an object of type 'int'

    int var2 = 8;
    int* ptr3 = &var2; //pointer to var2 , int type

    *ptr3 = 10; //dereferencing , changing value of var2

    std::cout<<var2<<std::endl;


    //using heap memory
    char* buffer = new char[8]; //allocate 8 bytes of memory on heap
                                //points to first block of memory

    memset(buffer,0,8); //set all 8 bytes to 0
                        //

    //deleting memory
    delete[] buffer; //delete memory allocated on heap
                     //

    //double pointer
    int** ptr4 = &ptr3; //pointer to pointer to int
                        //there can be multiple levels of pointers
    std::cin.get();
}
