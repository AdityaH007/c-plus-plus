//map is known as an assosciative array or a dict
//optimized for lookups
#include <map>
#include <string>
using namespace std;
struct Entry {
    std::string name;
    int number;
};


std::map<string,int> phone_book
    {
        {"David",123456},
            {"karl",23456}
    };

int get_number(const string& s)
{
    return phone_book[s];
}


//thr cost of lookup is O(log(n))
