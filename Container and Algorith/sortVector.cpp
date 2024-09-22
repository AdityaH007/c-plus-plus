#include <algorithm>
#include <vector>


bool operator < (const Entry& x,const Entry& y) //less than
    {
        return x.name<y.name; //order entry by name
    }




void f(std::vector<Entry>& vec,list<Entry>& Ist)
{
    std::sort(vec.begin(),vec.end());
    std::unique_copy(vec.begin(),vec.end(),Ist.begin());
}
