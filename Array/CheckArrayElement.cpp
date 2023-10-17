/*Take 10 integer inputs from user and store them in an array. Again ask user to give a number. Now, tell user whether that number
is present in array or not.*/

#include <iostream>
using namespace std;

int main()
{
    int A[10];
    for (int i = 0; i < 10; i++)
    {
        cout << "Enter the elements" << i + 1 << "of array: ";
        cin >> A[i];
    }

    int num1;
    do
    {
        cout << "Enter the number (-1 to exit): ";
        cin >> num1;
        if (num1 == -1)
        {
            cout << "Exiting the program.";
            break;                           // Exit the loop if -1 is entered
        }

        bool found = false;
        for (int i = 0; i < 10; i++)
        {
            if (A[i] == num1)
            {
                found = true;
                break;                       // Exit the loop if the number is found
            }
        }

        if (found)
        {
            cout << "Present in array" << endl;
        }
        else
        {
            cout << "Not present" << endl;
        }

    } while (true);

    return 0;
}



