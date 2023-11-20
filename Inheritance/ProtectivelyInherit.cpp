#include <iostream>
using namespace std;

class parent
{
private:
    int a;

protected:
    int b;

public:
    int c;
    int fun1()
    {
        a = 10;
        b = 20;
        c = 30;
        cout << a << " " << b << " " << c << endl;
    }
};
class child : protected parent
{
public:
    int fun2()
    {
        //  a=15;
        b = 25;
        c = 35;
        cout << b << " " << c << endl;
    }
};
class grandchild : public child
{
public:
    int fun3()
    {
        //  a=16;
        b = 26;
        c = 36;
        cout << b << " " << c << endl;
    }
};
int main()
{
    parent p;
    cout << p.fun1() << "\n";
    child c;
    cout << c.fun2() << "\n";
    grandchild g;
    cout << g.fun3();

    return 0;
}