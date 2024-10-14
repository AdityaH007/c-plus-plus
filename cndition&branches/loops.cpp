#include <iostream>
#include <ostream>


int main()
{
    for(int i=0; i<5;i++)
    {
        std::cout<<"IM RUNNING FOR LOOP"<<std::endl;
        if(i==3)
        {
            std::cout<<"BREAKING LOOP"<<std::endl;
            break;
        }
    }   
    int i=0;
    while(true)
    {
        std::cout<<"IM RUNNING WHILE LOOP"<<std::endl;
        if(i==0)
        {
            std::cout<<"BREAKING LOOP"<<std::endl;
            break;
        }
        i++;
    }
    return 0;
}
