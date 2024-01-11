//write as program to pop_back an array elements 

#include<iostream>
#include<vector>
using namespace std;
int main()
{     
   vector<int> arr;
   arr.push_back(2);
   arr.push_back(4);
   arr.push_back(6);
   arr.push_back(8);
   arr.push_back(10);

   cout<<"Array before pop back-> ";
   for(int i:arr)
   {
     cout<<i<<" ";
   }
   cout<<"\n";

   arr.pop_back();
   cout<<"Array after pop back-> ";
   for(int i:arr)
   {
    cout<<i<<" ";
   }
   



    return 0;
}