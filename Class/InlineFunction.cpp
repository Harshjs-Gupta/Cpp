// write a code for inline function
#include <iostream>
using namespace std;

class Rectangle
{
private:
    int length; // here we declare member of the class
    int breadth;

public:
    Rectangle(int l, int b) // here we write a parameterized constructor
    {
        length = l;
        breadth = b;
    }
    int area() // this is a inline function because of the function is written inside class
    {
        return length * breadth;
    }
    inline int perimeter();
};

inline int Rectangle::perimeter()
{
    return 2 * (length + breadth);
}
int main()
{
    Rectangle rect(10, 5);

    cout << "Area is: " << rect.area() << endl;
    cout << "Perimeter is: " << rect.perimeter();

    return 0;
}
