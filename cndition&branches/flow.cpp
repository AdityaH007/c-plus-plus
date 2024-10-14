//control flow works with loop ,
//continue , break , return 
//continue : skip the current iteration of the loop and goes to next
//break : exit the loop
//return : exit the function
//


#include <iostream>

int main()
{
    for(int i =0;i<10;i++)
    {
        std::cout<<i<<std::endl;
        if(i==5)
        {
            std::cout<<"continue"<<std::endl;
            continue;
        }
        std::cout<<i<<std::endl;
    }
}
