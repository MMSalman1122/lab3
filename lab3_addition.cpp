#include <iostream>
using namespace std;
class Adition{
public:
    Adition()
    {
        num1=0;
        num2=0;
    }
    void set_num1(double num)
    {
        num1=num1+num;
    }
    void set_num2(double num)
    {
        num2=num2+num;
    }
    double get_add()
    {
        return num1+num2;
    }


private:
    double num1,num2;

};

int main()
{
    Adition lol;

    double num;
    cout<<"Enter the num1: \n";
    cin>>num;
    lol.set_num1(num);

    cout<<"Enter the num2: \n";
    cin>>num;
    lol.set_num2(num);

    cout<<"Addition is:"<<lol.get_add();


    return 0;
}
