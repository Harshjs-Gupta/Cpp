//Write a program to print every character of a string entered by user in a new line using loop
#include<iostream>
#include<string.h>
using namespace std;
int main()
{
   char str[20];
   string name;
   cout<<"Enter the name: ";
   cin>>name;
   for(int i=0;i<name.length();i++)
   {
    cout<<name[i]<<"\n"<<endl;
   }
return 0;
}

