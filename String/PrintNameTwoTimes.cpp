//write a program to print the name of user two times
#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    char str1[20];
    char str2[20];
    cout<<"Enter your name: ";
    cin.getline(str1,20);
    cout<<"welcome "<<str1<<endl;
    cout<<"Enter your name again: ";
    cin.getline(str2,20);
    cout<<"welcome again "<<str2<<endl; 
return 0;
}
