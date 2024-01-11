// write a program to use array operation in STL Array

#include<iostream>
#include<array>
using namespace std;

int main()
{

//   int arr[4]={1,2,3,4};
array<int,4> arr={1,2,3,4};

  int length = arr.size();

  cout<<"Length of an array is-> "<<length<<endl;
  cout<<"Elements in an array is0-> ";
  for(int i=0;i<length;i++)
  {
     cout<<arr[i]<<" ";
  }
  cout<<"\n";
  cout<<"Element at second index is-> "<<arr.at(2)<<endl;
  cout<<"Array is empty or not-> "<<arr.empty()<<endl;
  cout<<"First elements in an array-> "<<arr.front()<<endl;
  cout<<"Last elements in an array-> "<<arr.back()<<endl;


    return 0;
}