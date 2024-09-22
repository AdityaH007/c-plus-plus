#include <fstream>
#include <iostream>
#include <iterator>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

ostream_iterator<string>oo {cout};

//input iterators are used in pairs 
istream_iterator<string>ii {cin};
//indicates end of input
istream_iterator<string>eos {};

int main()
{
    *oo ="Hello,";
    ++oo;
    *oo="world! \n";

    string from,to;
    cin>>from>>to;

    ifstream is {from}; //input stream for file "from"
    istream_iterator<string>ii {is};
    istream_iterator<string>eos {};


    ofstream os{to}; //output stream for file "to"
    ostream_iterator<string>oo {os,"\n"};

    vector<string>b {ii,eos}; //b is a vector initialized from input
    sort(b.begin(),b.end());

    unique_copy(b.begin(),b.end(),oo);

    return !is.eof() || !os;
//we can ignore the dublicates by using sets instead of vector
    


}


// ifstream is istream that can be attached to a file and same with ofstream



