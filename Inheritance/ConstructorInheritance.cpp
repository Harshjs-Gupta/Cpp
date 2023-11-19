#include <iostream>
using namespace std;

class base
{
public:
    base()
    {
        cout << "Default of base" << endl;
    }
    base(int x)
    {
        cout << "Parameter of base: " << x << endl;
    }
};
class derived : base
{
public:
    derived()
    {
        cout << "Default of derived" << endl;
    }
    derived(int a)
    {
        cout << "Parameter of derived: " << a << endl;
    }
    derived(int x, int a) : base(x)
    {
        cout << "Parameter of derived: " << a << endl;
    }
};
int main()
{
    derived d(20, 10);

    derived();

    return 0;
}