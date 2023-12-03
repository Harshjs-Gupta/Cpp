/* Enter the marks of 5 students in Chemistry, Mathematics and Physics (each out of 100) using a structure named Marks having elements 
roll no., name, chem_marks, maths_marks and phy_marks and then display the percentage of each student*/
#include<iostream>
using namespace std;
struct student
{
    char name[20];
    int roll_no;
    int chem_marks;
    int math_marks;
    int phy_marks;
};
int main()
{
    struct student st;
    for(int i=1;i<=5;i++)
    {
        cin>>st.name;
        cin>>st.roll_no;
        cin>>st.chem_marks;
        cin>>st.math_marks;
        cin>>st.phy_marks;
        
        cout<<"\n";

        cout<<"Student name: "<<st.name<<"\n";
        cout<<"Student roll_no: "<<st.roll_no<<"\n";
        cout<<"Student chem_marks: "<<st.chem_marks<<"\n";
        cout<<"Student math_marks: "<<st.math_marks<<"\n";
        cout<<"Student phy_marks: "<<st.phy_marks<<"\n"<<endl;

    }
     return 0;
}     