// write a program of Copy constructor
#include <iostream>
using namespace std;

class Rectangle
{
private:
    int length;
    int breadth;

public:
    Rectangle(int l=10, int b=5)
    {
        setLength(l);
        setBreadth(b);
    }
    Rectangle(Rectangle &r)
    {
        length = r.length;
        breadth = r.breadth;
    }
    void setLength(int l)
    {
        if (l >= 0)
            length = l;
        else
            length = 0;
    }
    void setBreadth(int b)
    {
        if (b >= 0)
            breadth = b;
        else
            breadth = 0;
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
    Rectangle rect;
    Rectangle r2(rect);

    cout << "Area of parameterized constructor: " << rect.area() << "\n";
    cout << endl;
    cout << "Area of copy constructor: " << r2.area();

    return 0;
}
