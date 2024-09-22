#include <iostream>
using namespace std;
void print_square(double x);


int main()
{
    cout<<"Hello World \n";
    // << means "put to"

    print_square(12);

    
    return 0;
}

double square(double x)
{
    return x*x;
}

void print_square(double x)
{
    cout<<"the square of "<<x<<" is "<<square(x)<<"\n";
}
