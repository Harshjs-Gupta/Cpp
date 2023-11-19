/*Write a C++ program to design a base class Person (name, address, phone_no). Derive a class Employee (eno, ename) from Person.
Derive a class Manager (designation, department name, basic-salary) from Employee. Write a menu driven program to:
a. Accept all details of 'n' managers.
b. Display manager having highest salary*/

#include <iostream>
#include <string>
using namespace std;

class Person
{
public:
    string name;
    string address;
    long int phone_no;
};
class Employee : public Person
{
public:
    int eno;
    string ename;
};
class Manager : public Employee
{
public:
    string designation;
    string department_name;
    int basic_salary;

    void AcceptDetails()
    {
        cout << "\nEnter Details of Manager\n";
        cout << "\n-----------------------\n";
        cout << "\n Enter Employee Name: ";
        cin>>ename;
        cout << "\n Enter Employee No: ";
        cin >> eno;
        cout << "\n Enter address: ";
        cin>>address;
        cout << "\n Enter phone: ";
        cin >> phone_no;
        cout << "\n Enter designation: ";
        cin>>designation;
        cout << "\n Enter department name: ";
        cin>>department_name;
        cout << "\n Enter basic_salary: ";
        cin >> basic_salary;
    }
};
int main()
{
    Manager mana[100];
    int num, temp, i;
    temp = 0;
    cout << "How many manager you wnat to enter: ";
    cin >> num;

    for (i = 0; i < num; i++)
    {
        mana[i].AcceptDetails();
    }
    for (int i = 0; i < num; i++)
    {
        if (mana[temp].basic_salary < mana[i].basic_salary)
        {
            temp = i;
        }
    }
    cout << "\n Manager with higest salary is: " << mana[temp].basic_salary << "\n";
    cout << "\n Manager name is: " << mana[temp].ename << endl;

    return 0;
}