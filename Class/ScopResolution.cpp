// write a code using scope resolution
#include <iostream>
using namespace std;

class Rectangle
{
private:
    int length;        //here we declare the member of the class 
    int breadth;

public:
    Rectangle(int l, int b)    //here we use parameterized constructor 
    {
        length = l;
        breadth = b;
    }
    int area()      //this is inline function function because the function is written inside class
    {
        return length * breadth;
    }
    int perimeter();  //this is not a function here we only declare prototype of function and also this is not a inline function because function is not declared here
};
int Rectangle::perimeter()     //here we write function of perimeter using scope resolution 
{
    return 2 * (length + breadth);
}
int main()
{
    Rectangle rect(10, 5);     //here we call the function Rectangle

    cout << "Area is: " << rect.area() << endl;

    cout << "Perimeter is: " << rect.perimeter();

    return 0;
}