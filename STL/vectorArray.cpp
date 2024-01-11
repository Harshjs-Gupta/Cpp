// write a progrsm to make a vector array

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> arr;

    arr.push_back(2);
    arr.push_back(4);
    arr.push_back(6);
    arr.push_back(8);
    arr.push_back(10);
    cout<<"Capacity-> "<<arr.capacity()<<endl;
    cout<<"Size-> "<<arr.size()<<endl;
    
    int length = arr.size();
    cout<<"Element at index 2 is-> "<<arr.at(2)<<endl;
    cout<<"Elements from front in array is-> "<<arr.front()<<endl;
    cout<<"elements from back in array is-> "<<arr.back()<<endl;

    return 0;
}