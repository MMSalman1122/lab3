#include <iostream>
using namespace std;
class Area{
public:
    Area()
    {
        length=0;
        width=0;
    }
    void set_length(double num)
    {
        length=length+num;
    }
    void set_width(double num)
    {
        width=width+num;
    }
    double get_area()
    {
        return length*width;
    }


private:
    double length,width;

};

int main()
{
    Area lol;

    double num;
    cout<<"Enter the length: \n";
    cin>>num;
    lol.set_length(num);

    cout<<"Enter the width: \n";
    cin>>num;
    lol.set_width(num);

    cout<<"Area:"<<lol.get_area();


    return 0;
}
