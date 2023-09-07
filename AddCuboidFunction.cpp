#include <iostream>
using namespace std;

class Rectangle
{
private:
    int length;   //this is a declaration of menber of class rectangle
    int breadth;

public:
    //this is a patameterized constructors 
    Rectangle(int l=0,int b=0) 
    {
        length=l;
        breadth=b;
    }
    //this is a mutator function to take input from user 
    void setLength(int l)     
    {
        length = l;
    }
    void setBreadth(int b)
    {
        breadth = b;
    }
    //this is a accessor function to show the value of members of classes
    int getLength()
    {
        return length;
    }
    int getBreadth()
    {
        return breadth;
    }
    //this is a facilitator which can perform some specific task  
    int area()
    {
        return length * breadth;
    }
    int perimeter()
    {
        return 2 * (length + breadth);
    }
};
//here cuboid is inherting the rectangle class publicaly
class Cuboid : public Rectangle
{
private:
    int height;

public:
    //this is a paremeterized constructors
    Cuboid(int h = 0)
    {
        setHeight(h);
    }
    //mutator
    void setHeight(int h)
    {
        height = h;
    }
    //accessor
    int getHeight()
    {
        return height;
    }
    //facilititor
    int volume()
    {
        return getLength() * getBreadth() * getHeight();
    }
};

int main()
{
    Cuboid c(3);   //here 

    cout << "Length is: " << c.getLength() << "\n";
    cout << "Breadth is: " << c.getBreadth() << "\n";
    cout << "Height is: " << c.getHeight() << "\n";

    cout << "\n";

    cout << "Area is: " << c.area() << "\n";
    cout << "Perimeter is: " << c.perimeter() << "\n";
    cout << "Volume is: " << c.volume() << endl;

    return 0;
}