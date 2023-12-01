/*Write a program to find the number of vowels, consonents, digits and white space
characters in a string*/
#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    char str[50];
    int vowel,consonant,digits,specialCharacter,space;
    vowel=0;
    consonant=0;
    digits=0;
    specialCharacter=0;
    space=0;
    cout<<"Enter the string: ";
    cin.getline(str, 50);
    for(int i=0;str[i]!='\0';i++)
    {
        if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u'||
        str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U')
        {
            vowel++;
        }
        else if((str[i] >='a' && str[i] <='z') || (str[i] >='A' && str[i] <='Z'))
        {
            consonant++;
        }
        else if(str[i] ==' ')
        {
            space++;
        }
        else if((str[i] >=33 && str[i] <=47) || (str[i]>= 58 && str[i]<=64))
        {
            specialCharacter++;
        }
        else 
        {
            digits++;
        }
    }
    cout<<"Vowel: "<<vowel<<endl;
    cout<<"Consonant: "<<consonant<<endl;
    cout<<"Digits: "<<digits<<endl;
    cout<<"Special Character: "<<specialCharacter<<endl;
    cout<<"Space: "<<space<<endl;
return 0;
}
