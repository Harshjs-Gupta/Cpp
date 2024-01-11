//write a program to clear an array elements using vector

#include<iostream>
#include<vector>
using namespace std;
int main()
{
   vector <int> arr;

   arr.push_back(2);
   arr.push_back(4);
   arr.push_back(6);
   arr.push_back(8);
   arr.push_back(10);

   cout<<"Array size before clear-> "<<arr.size()<<endl;
   arr.clear();
   cout<<"Array size afetr clear-> "<<arr.size()<<endl;


    return 0;
}