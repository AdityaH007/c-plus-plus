#include <cctype>
#include <iostream>
#include <string>
using namespace std;

string compose(const string& name , const string& domain)
{
    return name + '@' + domain;
}


void m2(string& s1,  string& s2)
{
    s2 +='\n';
}


void m3()
{
    string name = "Something and ";
    string s =name.substr(6,10);
    cout<<s<<'\n';
    name.replace(0,5,"Aditya");
    cout<<name<<"\n";
    name[0] = toupper(name[0]);
    cout<<name<<"\n";
}

void inp()
{
    cout<<"Please enter your name \n";
    string str;
    getline(cin,str);
    cout<<str;
}

int main()
{
    auto addr = compose("dmr","bell-labs.com");
    std::cout<<addr;
    m3();
    return 0;
}


