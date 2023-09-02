// write a program of non-perameterised constructor
#include <iostream>
using namespace std;

class Rectangle
{
private:
    int length = 0;
    int breadth = 0;

public:
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
};
int main()
{
    Rectangle r;

    r.setLength(10);
    r.setBreadth(-5);
    cout << r.getLength()<<"\n";
    cout << r.getBreadth();

    return 0;
}