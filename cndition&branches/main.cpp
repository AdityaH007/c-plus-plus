#include <iostream>



void nullcheck(const char* ptr){
    if(ptr){
        std::cout<<"not null pointer"<<std::endl;
    }
    else{
        std::cout<<"null pointer"<<std::endl;
    }
}


int main() {
    int x =5;

    if (x==5){
     std::cout<<"x is 5"<<std::endl;
    
    }
    else{
        std::cout<<"x is not 5"<<std::endl;
    }
    const char* ptr =nullptr;
    const char* ptr2 = "hello";

    nullcheck(ptr);
    nullcheck(ptr2);

    return  0;
}
