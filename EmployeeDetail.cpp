/*Write a program that would print the information (name, year of joining, salary, address) of three employees by creating a class named 'Employee'. The output should be as follows:
Name        Year of joining        Address
Robert        1994        64C- WallsStreat
Sam           2000        68D- WallsStreat
John          1999        26B- WallsStreat */

#include <iostream>
using namespace std;

class Employee
{
private:
    string name;
    int joiningYear;
    int salary;
    string address;

public:
    void setName(string name)
    {
        this->name = name;
    }
    void setJoiningYear(int year)
    {
        joiningYear = year;
    }
    void setSalary(int salary)
    {
        this->salary = salary;
    }
    void setAddress(string address)
    {
        this->address = address;
    }
    void Display()
    {
        cout << "Name \t"
             << "Year of joining \t"
             << "Salary \t"
             << "Addrerss \n"
             << name << "\t" << joiningYear << "\t\t\t" << salary << "\t" << address << endl;
    }
};
int main()
{
    Employee e;

    string name;
    int joiningYear;
    int salary;
    string address;

    for (int i = 0; i < 3; i++)
    {
    cin >> name >> joiningYear >> salary >> address;

    e.setName(name);
    e.setJoiningYear(joiningYear);
    e.setSalary(salary);
    e.setAddress(address);
    }

    for(int i=0;i<3;i++)
    {
        e.Display();
    }

    return 0;
}