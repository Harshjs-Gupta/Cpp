//write a program to copy the string 
#include<iostream>
#include<string.h>
using namespace std;
int main()
{
  char str1[20]=" ";
  char str2[20]="Hello World";
  strcpy(str1,str2);
  cout<<str1<<endl;
return 0;
}
