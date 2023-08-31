// write a code for insertion operation
#include <iostream>
using namespace std;

class Complex
{
private:
    int real;
    int img;

public:
    Complex(int r = 0, int i = 0)
    {
        real = r;
        img = i;
    }
    friend ostream &operator<<(ostream &out, Complex &c);
};
ostream &operator<<(ostream &out, Complex &c)
{
    out << c.real << "+i" << c.img;
    return out;
}
int main()
{
    Complex c(3, 7);
    cout << c;

    return 0;
}