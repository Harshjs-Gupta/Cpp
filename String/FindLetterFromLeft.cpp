//write a program to find the letter from left to right
#include<iostream>
#include<string.h>
using namespace std;
int main()
{
   string str="Hello World";
   cout<<str.find_first_of('l')<<endl;
return 0;
}


// write a program to find the letter from right to left
#include<iostream>
#include<string.h>
using namespace std;
int main()
{
  string str="Hello World";
  cout<<str.find_last_of('l')<<endl;
return 0;
}
