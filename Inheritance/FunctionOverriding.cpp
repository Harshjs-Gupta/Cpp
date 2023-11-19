#include <iostream>
using namespace std;

class parent
{
public:
    void display()
    {
        cout << "Display of parent";
    }
};
class child : public parent
{
public:
    void display()
    {
        cout << "Display of child";
    }
};
int main()
{
    parent p;
    p.display();
    cout << "\n";
    child c;
    c.display();

    return 0;
}