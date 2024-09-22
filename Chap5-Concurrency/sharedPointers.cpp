//SHARED POINTERS
#include <fstream>
#include <ios>
#include <iostream>
#include <memory>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;


// Shared pointers are copied rather than move
// ..
// Shared pointer share ownership of an object and object is 
// destroyed when last of its shared pointers are destroyed

void f(shared_ptr<fstream>);
void g(shared_ptr<fstream>);

void user(const string& name, ios_base::open_mode mode)
{
    shared_ptr<fstream>fp {new fstream(name,mode)};
    if(!*fp)throw No_file{}; 

    f(fp);

}


int main()
{

}

