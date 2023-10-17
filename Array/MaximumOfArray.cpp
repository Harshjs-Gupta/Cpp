//write a program to find the max of array element 
#include<iostream>
using namespace std;
int main()
{
    int array[7]={6,9,1,5,11,2,3};
    int max;
    max=array[0];
    for(int i=1;i<7;i++)
    {
        if(array[i]>max)
        {
            max=array[i];
        }
    }
    cout<<"maximum is: "<<max;
    return 0;
}



//write a program to show the both maximum and minimum number
#include<iostream>
using namespace std;
int main()
{
   int array[7]={6,9,1,5,11,2,3};
   int max,min;
   max=array[0];
   min=array[0];
   for(int i=1;i<7;i++)
   {
    if(array[i]>max)
    {
        max=array[i];
    }
    if(array[i]<min)
    {
        min=array[i];
    }
   }
   cout<<"maximum is: "<<max<<endl;
   cout<<"minimum is: "<<min;
   return 0;
}
