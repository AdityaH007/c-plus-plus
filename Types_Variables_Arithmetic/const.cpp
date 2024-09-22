#include <vector>
using namespace  std;
int main()
{
    const int dmv=17; //a constant
    int var=17;
    constexpr double max1= 1.4*square(dmv);
    //OK if square(dmv)is a constant



  //  constexpr double max2=1.4*square(var); --> //erre ; var is not a constant exp

    
    const double max3=1.4*square(var); //OK, maybe evaluated at run time




    double sum(const vector<double>&); //sum will not modify its argument



    vector<double>v {1.2,3.4}; //v is not constant
    const double s1=sum(v); //evaluated at run time

    //constexpr double s2= sum(v);  -> error sum(v) is not constant exp

    return 0;


}
