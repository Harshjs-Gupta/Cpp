#include <iostream>
#include <sstream>
#include <algorithm>
#include <string>
using namespace std;

class student
{
    string first_name;
    string last_name;
    int age;
    int standard;

public:
    void set_First_name(string name)
    {
        first_name = name;
    }
    void set_Last_name(string surname)
    {
        last_name = surname;
    }
    void set_age(int a)
    {
        age = a;
    }
    void set_standard(int std)
    {
        standard = std;
    }
    string get_First_name()
    {
        return first_name;
    }
    string get_Last_name()
    {
        return last_name;
    }
    int get_age()
    {
        return age;
    }
    int get_standard()
    {
        return standard;
    }

    string to_string()
    {
        return std::to_string(age) + "," + first_name + "," + last_name + "," + std::to_string(standard);
    }
};
int main()
{
    string first_name;
    string last_name;
    int age;
    int standard;

    cin >> first_name >> last_name >> age >> standard;

    student st;
    st.set_First_name(first_name);
    st.set_Last_name(last_name);
    st.set_age(age);
    st.set_standard(standard);

    cout << "\n";

    cout << st.get_First_name() << "\n";
    cout << st.get_Last_name() << "\n";
    cout << st.get_age() << "\n";
    cout << st.get_standard() << endl;
    cout<<"\n";

    cout << st.to_string();

    return 0;
}