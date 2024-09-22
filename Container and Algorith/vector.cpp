// A vector is a sequence of elements of a given type

#include <iostream>
#include <string>
#include <vector>
using namespace std;


struct Entry{
    std::string name;
    int number;
};

void print_book(const vector<Entry>&book)
{
    for(int i=0;i!=book.size();++i)
        cout<<book[i];
    //or
    for(const auto& x: book)
        cout<<x<<"\n";
}

void input()
{
    for(Entry e;cin>>e;)
        phone_book.push_back(e);
}

int main()
{
    std::vector<Entry>phone_book={
        {"David hume",123456},
        {"karl popper",234567},
        {"Bertrand",345678}

    };
}

//the standard libarary of vector dnt provide range checking
void silly(vector<Entry>& book)
{
    int  i=book[ph.size()].number; 
    //book is out of range
    /*That initialization is likely to place some random value in i rather than giving an error. This is
undesirable, and out-of-range errors are a common problem.*/

}
