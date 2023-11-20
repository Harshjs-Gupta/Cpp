/*Create a class named Shape with a function that prints "This is a shape".
Create another class named Polygon inheriting the Shape class with the same function that prints "Polygon is a shape".
Create two other classes named Rectangle and Triangle having the same function which prints "Rectangle is a polygon" and "Triangle is a polygon"
respectively. Again, make another class named Square having the same function which prints "Square is a rectangle".
Now, try calling the function by the object of each of these classes.*/

#include <iostream>
using namespace std;

class Shape
{
public:
    void function1()
    {
        cout << "This is a shape";
    }
};
class Polygon : public Shape
{
public:
    void function2()
    {
        cout << "Polygon is a shape";
    }
};
class Rectangle : public Polygon
{
public:
    void function3()
    {
        cout << "Rectangle is a polygon";
    }
};
class Triangle : public Polygon
{
public:
    void function4()
    {
        cout << "Triangle is a polygon";
    }
};
class Square : public Rectangle
{
public:
    void function5()
    {
        cout << "Square is a rectangle";
    }
};
int main()
{
    Shape shape;
    Polygon poly;
    Rectangle rect;
    Triangle tri;
    Square sq;

    shape.function1();
    cout << "\n";
    poly.function2();
    cout << "\n";
    rect.function3();
    cout << "\n";
    tri.function4();
    cout << "\n";
    sq.function5();
    cout << "\n";

    return 0;
}