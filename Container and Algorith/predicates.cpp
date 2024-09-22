#include <iostream>
#include <map>
#include <string>
#include <utility>
#include <vector>
#include <algorithm>
using namespace std;

void f(map<string, int>& m)
{
    auto p=find_if(m.begin(),m.end(),Greater_than(42));
}

struct Greater_than {
    int val;
    Greater_than(int v):val{v} { }
    bool operator()(const pair<string,int>& r){return r.second>val;}
};

int main()
{

}

