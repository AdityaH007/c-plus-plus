enum class Color { red,blue,green};
enum class Traffic_light {green,yellow,red};

int main()
{
    Color col = Color::red;
    Traffic_light ight = Traffic_light::red;

    /* Examples 
       Color x = red; --> error: which red?
       Color y = Traffic_light::red  --> //error: that red is not a color
       Color z = Color::red -->OK

       ~ We cannot implicitly mix color and intger values ~
       int i = Color::red; -->error , Color::red is not int
       Color c = 2 ,--> error , 2 is not a color
       */
   
}
