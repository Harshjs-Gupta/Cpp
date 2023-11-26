//write a program to reverse of number method 2
#include<iostream>
using namespace std;
int main()
{
   int n,m,r,rev=0;
   cout<<"Enter n: ";
   cin>>n;
   while(n>0)
   {
    r=n%10;
    n=n/10;
    rev=rev*10+r;
   }
   cout<<"reverse number is: "<<rev;

    return 0;
}