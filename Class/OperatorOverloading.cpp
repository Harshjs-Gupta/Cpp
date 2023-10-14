// write a code for add two complex number method 1
// #include <iostream>
// using namespace std;

// class Complex
// {
// public:
//     int real;
//     int img;

//     Complex()
//     {
//         real = 0;
//         img = 0;
//     }
//     Complex(int r, int i)
//     {
//         real = r;
//         img = i;
//     }
//     Complex operator+(Complex x)
//     {
//         Complex temp;
//         temp.real = real + x.real;
//         temp.img = img + x.img;
//         return temp;
//     }
// };
// int main()
// {
//     Complex c1(3, 7);
//     Complex c2(5, 4);
//     Complex c3;
//     c3 = c1 + c2;
//     cout << "Complex number is: " << c3.real << "+i" << c3.img;

//     return 0;
// }

//write a code for add two complex number method 2
#include <iostream>
using namespace std;

class Complex
{
public:
    int real;
    int img;

    Complex()
    {
        real = 0;
        img = 0;
    }
    Complex(int r, int i)
    {
        real = r;
        img = i;
    }
    Complex add(Complex x)
    {
        Complex temp;
        temp.real = real + x.real;
        temp.img = img + x.img;
        return temp;
    }
};
int main()
{
    Complex c1(3, 7);
    Complex c2(5, 4);
    Complex c3;
    c3 = c1.add(c2);
    cout << "Complex number is: " << c3.real << "+i" << c3.img;

    return 0;
}