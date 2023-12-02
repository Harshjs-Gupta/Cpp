//write a program to resize a string 
#include<iostream>
#include<string.h>
using namespace std;
int main()
{
   string str="Hello";
   str.resize(50);
   cout<<str.capacity()<<endl;
return 0;
}
