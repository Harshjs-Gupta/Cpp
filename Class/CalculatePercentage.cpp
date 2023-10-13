/*Write a C++ program to calculate the percentage of a student using multi-level inheritance. Accept the marks of three subjects in base class. 
A class will derived from the above mentioned class which includes a function to find the total marks obtained and another 
class derived from this class which calculates and displays the percentage of student.*/


#include<iostream>
using namespace std;

class Adddata
{
  protected:
  int english;
  int math;
  int chemistry;
  public:
  void details()
  {
    cout<<"----Enter marks of three subjects----";
    cout<<"\nEnglish Marks: ";
    cin>>english;
    cout<<"Maths Marks: ";
    cin>>math;
    cout<<"Chemistry Marks: ";
    cin>>chemistry;

  }
};
class Total: public Adddata
{
  public:
  int total;
  void total_of_subjects()
  {
    total=english+math+chemistry;
    cout<<"Total of subject is: "<<total;
    cout<<"\n";
  }
};
class Percentage: public Total
{
  public:
  int percen;
  void percentage()
  {
    percen=total/3;
  }
  void result()
  {
    cout<<"Percentage is: "<<percen;
  }
};
int main()
{
  Percentage p;
  p.details();
  p. total_of_subjects();
  p.percentage();
  p.result();


    return 0;
}