#include <iostream>
using namespace std;

class rectangle
{
private:
    int length;
    int breadth;

public:
    rectangle(int l, int b)
    {
        length = l;
        breadth = b;
    }
    int area()
    {
        return length * breadth;
    }
    int perimeter()
    {
        return 2 * (length + breadth);
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
    rectangle r(10, 5);

    cout << "Length is: " << r.getLength() << "\n";
    cout << "Length is: " << r.getBreadth() << endl;

    cout << "\n";

    cout << "Area is: " << r.area() << "\n";
    cout << "Perimeter is: " << r.perimeter() << endl;

    return 0;
}