#include <iostream>
struct Vector{
    int sz; //number of element
    double* elem; //pointer to element

};


void vector_init(Vector& v,int s)
{
    v.elem=new double[s]; //allocate an array of s doubles
    v.sz = s;
    //new allocated memmeory from an area called free store
}

double read_and_sum(int s)
{
    Vector v;
    vector_init(v,s);

    for(int i=0;i!=s;++i)
        std::cin>>v.elem[i];

    double sum =0;
    for (int i=0; i!=s;++i) {
    
        sum += v.elem[i];

    }

    return sum;
}

int main()
{
    int s = 3;
    std::cout<<read_and_sum(s);
}


void f(Vector v, Vector& rv,Vector* pv)
{
    int i1=v.sz; //accrss through name
    int i2=rv.sz; //access through reference 
    int i3=pv->sz; //access through pointer 
}
