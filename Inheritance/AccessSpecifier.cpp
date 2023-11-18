#include <iostream>
using namespace std;

class base
{
private:
    int a;

protected:
    int b;

public:
    int c;
    int funbase()
    {
        a = 10;
        b = 20;
        c = 30;
        cout << a << " " << b << " " << c << endl;
    }
};
class derived : base
{
public:
    int funderived()
    {
        // a=15;
        b = 25;
        c = 35;
        cout << b << " " << c << endl;
    }
};
int main()
{
    base b;
    cout << b.funbase() << "\n";
    derived d;
    cout << d.funderived();

    return 0;
}