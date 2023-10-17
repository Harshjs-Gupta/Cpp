// write a code for this pointer
#include <iostream>
using namespace std;

class Rectangle
{
private:
    int length; // here we declare the member of class
    int breadth;

public:
    Rectangle(int length, int breadth) // here we use parameterized constructor
    {
        this->length = length; // to avoid the name ambiguity and to make teh statement more clear you can write like this( this-> )
        this->breadth = breadth;
    }
    int area()
    {
        return length * breadth;
    }
};
int main()
{
    Rectangle rect(10, 5);
    cout << "Area is: " << rect.area();
    return 0;
}