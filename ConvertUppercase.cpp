// write a program to take the name of string from user in small letter and convert into capital letter

/* TestCases 🙄

1. harsh gupta --> HARSH GUPTA
2. Harsh Gupta --> HARSH GUPTA
3. HARSH GUPTA --> HARSH GUPTA
4. HhAaRrSsHh GgUuPpTtAa --> HHAARRSSHH GGUUPPTTAA
5. harshgupta --> HARSHGUPTA
5. HARSHGUPTA --> HARSHGUPTA
*/

#include <iostream>
#include <string>
using namespace std;

void convertToUppercase(string str)
{
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] >= 'a' && str[i] <= 'z')
        {
            str[i] = str[i] - 32;
        }
    }
    cout << str;
}
int main()
{
    string str;
    cout << "Enter the name: ";
    getline(cin, str);

    convertToUppercase(str);

    return 0;
}
