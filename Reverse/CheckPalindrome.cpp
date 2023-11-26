//write a program to check the number is palindrome or not
#include<iostream>
using namespace std;
int main()
{
   int n,m,r,rev=0;
   cout<<"enter the number: ";
   cin>>n;
   m=n;
   while(n>0)
   {
    r=n%10;
    n=n/10;
    rev=rev*10+r;
   }
   cout<<"reverse number is: "<<rev;
   cout<<endl;
   if(m==rev)
   {
    cout<<"Its a palindrome";
   }
   else
   {
    cout<<"Its not a palindrome";
   }

    return 0;
}
