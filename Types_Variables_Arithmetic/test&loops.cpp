

#include <iostream>
using namespace std;
bool accept();
bool accept2();


int main()
{
   accept();
   accept2();
}


bool accept()
{
    cout<<"Do you want to proceed (Y or N)\n";
    char answer =0;
    cin>>answer;

    if(answer=='y') return true;
    return false;
    
}


bool accept2()
{
    cout<<"DO you want to proceed (Y or N)\n";
    char answer =0;
    cin>>answer;

    switch (answer) {
        case'y':
            return true;
        case 'n':
            return false;

        default:
            cout<<"I will take no\n";
            return false;
    
    }
}
