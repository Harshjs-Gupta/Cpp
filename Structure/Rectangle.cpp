#include <iostream>
using namespace std;

struct rectangle
{
    int length;
    int breadth;
};
int Initialise(rectangle *r, int l, int b)
{
    r->length = l;
    r->breadth = b;
}
int getLength(rectangle r)
{
    return r.length;
}
int getBreadth(rectangle r)
{
    return r.breadth;
}
int Area(rectangle r)
{
    return r.length * r.breadth;
}
int Perimeter(rectangle r)
{
    return 2 * (r.length + r.breadth);
}
int main()
{
    rectangle r;

    Initialise(&r, 10, 5);

    cout << "Length is: " << getLength(r) << "\n";
    cout << "Breadth is: " << getBreadth(r)<<"\n";

    cout << "\n";

    cout << "Area is: " << Area(r) << "\n";
    cout << "Perimeter is: " << Perimeter(r) << endl;

    return 0;
}