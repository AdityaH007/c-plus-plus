//hashed containers are known as unordered


#include <string>
#include <unordered_map>
using namespace std;
struct Entry {
    std::string name;
    int number;
};

std::unordered_map<std::string, int> phone_book {

    {"David",1234560},
        {"dead",234567}
};

int get_number(const string& s)
{
    return phone_book[s];
}
