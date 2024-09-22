#include <complex>
#include <iostream>
#include <ostream>
#include <vector>

using namespace std;

void some_func();
void complex_type();



// Custom output stream operator for vector
template<typename T>
ostream& operator<<(ostream& os, const vector<T>& v) {
    os << "[";
    for (size_t i = 0; i < v.size(); ++i) {
        os << v[i];
        if (i != v.size() - 1)
            os << ", ";
    }
    os << "]";
    return os;
}



int main()
{
    cout << "Hello world" << endl;
    some_func();
    complex_type();
    auto b = true ; 
    const int dmv = 17;
}



void some_func()
{
    double d = 2.2;
    int i = 7;
    d = d + i;
    i = static_cast<int>(d) * i; // Cast to int to avoid warning
    cout << d << " Will this work " << i << endl;
}



void complex_type()
{
    double d1 = 2.3;
    double d2{2.3};

    complex<double> z = 1;
    complex<double> z2{d1, d2};
    complex<double> z3 = {1, 3}; // "=" is optional with {}
    int i{1};

    vector<int> v{1, 2, 3, 4, 5, 6};
    cout << d1 << endl << d2 << endl << z2 << endl << z3 << endl << v << endl;
}

