#include <iostream>
void copy_fct();

void nfun();

int main()
{
    char v[6];
    
    char* p = &v[3];
    char x=*p;

    std::cout<<x;
    copy_fct();

    return 0;
}

void copy_fct()
{
    int v1[10]={0,1,2,3,4,5,6,7,8,9};
    int v2[10];

    for(auto i=0;i!=10;++i)
    {
        v2[i]=v1[i];
        std::cout<<v2[i]<<"\n";
    }
}

void nfun()
{
    double* pd=nullptr;
    Link<Record>* ist = nullptr; //pointer to a Link to a Record
    int x = nullptr; //error: nullptr is a pointer not an integer
}




int count_x(char* p,char x)
    //p point to a array of char
{
    if(p==nullptr)return 0;
    int count=0;

    for(;*p!=0;++p)
    {
        if(*p==x)
            ++count;

        return count;
    }

}














