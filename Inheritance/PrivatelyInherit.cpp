#include <iostream>
using namespace std;

class parent
{
private:
    int a;  //here 'a' is declared as a private member

protected:
    int b;  // here 'b' is declared as a protected member

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
class child : private parent
{
public:
    int fun2()
    {
        // a = 10;
        b = 20;
        c = 30;
        cout << " " << b << " " << c << endl;
    }
};
class grandchild : public child
{
public:
    int fun3()
    {
        // a = 10;
        // b = 20;
        // c = 30;
        // cout << a << " " << b << " " << c << endl;
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