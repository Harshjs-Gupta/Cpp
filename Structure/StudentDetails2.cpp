// Write a program to store and print the roll no., name, age, address and marks of 15 students using structure.
// #include <iostream>
// using namespace std;
// struct student
// {
//     char name[20];
//     int age;
//     int roll_no;
//     char address[50];
// };
// int main()
// {
//     char name[20];
//     int age;
//     int roll_no;
//     char address[50];

//     struct student st;

//     for (int i = 1; i <= 15; i++)
//     {
//         cin >> st.name >> st.age >> st.roll_no >> st.address;
//         cout << "\n";
//         cout << st.name << "\n";
//         cout << st.age << "\n";
//         cout << st.roll_no << "\n";
//         cout << st.address << "\n";
//         cout << "\n";
//     }

//     return 0;
// }



#include<iostream>
using namespace std;
struct student 
{
    char name[20];
    int age;
    int roll_no;
    char address[50];
};
int main()
{
    char name[20];
    int age;
    int roll_no;
    char address[20];

  struct student st[15];
  for(int i=1;i<=15;i++)
  {
    cout<<"Student name: ";
    cin>>st[i].name;
    cout<<"Age is: ";
    cin>>st[i].age;
    cout<<"Roll_no: ";
    cin>>st[i].roll_no;
    cout<<"Address: ";
    cin>>st[i].address;

    cout<<"\n";
    cout<<"Student name: "<<st[i].name<<"\n";
    cout<<"Student age: "<<st[i].age<<"\n";
    cout<<"Student roll_no: "<<st[i].roll_no<<"\n";
    cout<<"Student address: "<<st[i].address<<"\n"<<endl;

  }



    return 0;
}