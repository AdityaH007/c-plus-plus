

#include <list>
//the standard lib of lit offers a doubly-linked list
#include <string>
using namespace std;

struct Entry{
    std::string name;
    int number;
};

int get_number(const string& s)
{
    for(const auto& x:phone)
        if(x.name==s)
            return x.number;
    return 0;
}

int main()
{
    std::list<Entry>phone_book= {
        {"David",123456},
        {"karl",123658},
        {"someone",963258}
    };
}

int get_numver(const string& s)
{
    std::list<Entry>phone_book={
        {"David",12345}
    };
    for(auto p = phone_book.begin(); p!=phone_book.end();++p)
        if(p->name==s)
            return p->number;
    return 0;
}

void f(const Entry& ee , list<Entry>::iterator p,list<Entry>::iterator q)
{
  phone_book.insert(p,ee); //add ee bfore the element reffered to by p
    phone_book.erase(q);
}
