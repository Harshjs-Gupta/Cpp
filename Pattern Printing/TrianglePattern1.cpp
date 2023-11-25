//write a program to make the pattern piramid
// #include<iostream>
// using namespace std;
// int main()
// {

//    // outter loop
//    for(int i=1;i<=9;i++)
//    { 

//     // inner loops
//     for(int j=9;j>=i;j--) // adding space
//     { 
        
//         cout<<" ";
//     }
//     for(int k=1;k<=2*i-1;k++) // print star ⭐ 
//     {
        
//         cout<<"*";
//     }
//     cout<<endl;
//    }
//     return 0;
// }



//write a program to making a rombus
/*#include<iostream>
using namespace std;
int main()
{

   // outter loop
   for(int i = 1; i <= 9; i++)
   { 

    // inner loops
    for(int j = 9;j >= i; j--) // adding space
    { 
        
        cout<<" ";
    }
    for(int k=1; k<=2*i-1 ;k++) // print star ⭐ 
    {
        
        cout<< "*";
    }
    cout<<endl;
   }
   for(int i = 10; i>=1 ; i--)
    {
        for(int j=10-1; j>=i; j--)
        {
            cout<< " ";
        }
        for(int k=2*i-1; k>=1; k--)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}*/


//write a program to making a piramid
#include <iostream>
using namespace std;

int main() {
    // outer loop
    for (int i = 1; i <= 9; i++) {
        // inner loops for spaces
        for (int j = 9; j >= i; j--) {
            cout << " ";
        }
        
        // inner loop for stars
        for (int k = 1; k <= 2 * i - 1; k++) {
            cout << "*";
        }
        
        cout << endl;
    }
    
    // outer loop for inverted pattern
    for (int i = 10; i >= 1; i--) {
        // inner loops for spaces
        for (int j = 10 - 1; j >= i; j--) {
            cout << " ";
        }
        
        // inner loop for stars
        for (int k = 2 * i - 1; k >= 1; k--) {
            cout << "*";
        }
        
        cout << endl;
    }
    
    return 0;
}
