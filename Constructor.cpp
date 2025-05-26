#include<iostream>
using namespace std;
class Rectangle
{
    double length;
    double width;
    public:
    Rectangle()
    {
        length=width=1;
    }
    Rectangle(double l,double w)
    {
        length=l;
        width=w;
    }
    Rectangle(double val)
    {
        length=width=val;
    }

    int area()
    {
        return length*width;
    }
};
int main()
{
    Rectangle r1;
    Rectangle r2(10,6);
    Rectangle r3(5);

    cout<<"Area of rectangle 1 "<<r1.area()<<" "<<endl;
    cout<<"Area of rectangle 2 "<<r2.area()<<" "<<endl;
    cout<<"Area of rectangle 3 "<<r3.area()<<" "<<endl;
    
}