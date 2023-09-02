// write a program of perameterised constructor
#include <iostream>
using namespace std;

class Rectangle
{
private:
    int length;
    int breadth;

public:
    Rectangle(int l, int b)
    {
       setLength(l);
       setBreadth(b);
    }

    void setLength(int l)
    {
        length = l;
    }
    void setBreadth(int b)
    {
        breadth = b;
    }
    int getLength()
    {
        return length;
    }
    int getBreadth()
    {
        return breadth;
    }
    int area()
    {
        return length * breadth;
    }
};
int main()
{
    Rectangle rect(10, 5);

    cout<<"Area is: "<<rect.area();

    return 0;
}


 