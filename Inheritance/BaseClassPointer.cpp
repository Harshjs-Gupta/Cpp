#include <iostream>
using namespace std;

class base
{
public:
    int a = 10;
    int b = 5;
    int c;
   virtual int fun()
    {
        c = a + b;
        cout << c << endl;
    }
};
class derived : public base
{
public:
    int fun()
    {
        c = a * b;
        cout << c << endl;
    }
};
int main()
{
    base *b;
    b=new derived();
    b->fun();
    return 0;
}