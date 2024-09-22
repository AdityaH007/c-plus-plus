#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{

}


bool has_c(const string& s, char c)
{
    auto p = find(s.begin(),s.end(),c);
    if(p!=s.end())
        return true;
    else
     return false;
}

bool alter(const string& s, char c)
{
    return find(s.begin(),s.end(),c)!=s.end();
}

//With location

vector<string::iterator> find_all(string& s, char c)
{
    vector<string::iterator>res;
    for(auto p=s.begin();p!=s.end();++p)
        if (*p == c) {
        res.push_back(p);
        }
    cout<<"1";
    return res;
}

void test()
{
    string m{"Marry had a little lamb"};
    for(auto p:find_all(m, 'a'))
        if(*p!='a')
            cerr<<"a bug \n";
}
