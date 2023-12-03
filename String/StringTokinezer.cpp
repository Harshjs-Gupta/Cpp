//write a program to string tokenizer
#include<iostream>
#include<string.h>
using namespace std;
int main()
{
char str[100]="hi, i am harsh gupta";
char *token=strtok(str, " ,");
while(token!=NULL)
{
  cout<<token<<endl;
  token=strtok(NULL," ,");
}
return 0;
}
