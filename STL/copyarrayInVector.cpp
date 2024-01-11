// write a program to copy the old array into new array using vector 

#include<iostream>
#include<vector>
using namespace std;
int main()
{
   vector <int> arr(5,1);

   cout<<"Old Array elements-> ";
   for(int i:arr)
   {
    cout<<i<<" ";
   }
   cout<<"\n";

   vector <int> last(arr);
   cout<<"copied array elements-> ";                                                                                                                                                                       
   for(int i:last)
   {
    cout<<i<<" ";
   }



    return 0;
}