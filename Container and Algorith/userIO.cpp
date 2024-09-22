#include <istream>
#include <string>
#include <strstream>

struct Entry {
    std::string name;
    int number;
};

std::ostrstream& operator<<(std::ostrstream& os, const Entry& e)
{
    return os <<"{\""<<e.name<<"\","<<e.number<<"}";
}


std::istream& operator>>(istream& is,Entry& e)
{
    char c,c2;
    if(is>>c && c=='{' && is>>c2 && c2==""){
        std::string name;
        while (is.get(c) && c!=="") {
        
            name +=c;

        }

        if(is>>c && c==',') {

            int number =0;
            if(is>>number>>c && c=='}')
            {
                e = {name,number};
                return is;
            }


        }
    }

    is.set(ios_base::failbit); //register failure in the stream
    return is;
}
