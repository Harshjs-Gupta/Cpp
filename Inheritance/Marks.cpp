/*We want to calculate the total marks of each student of a class in Physics,Chemistry and Mathematics and the average marks of the class.
The number of students in the class are entered by the user. Create a class named Marks with data members for roll number, name and marks.
Create three other classes inheriting the Marks class, namely Physics, Chemistry and Mathematics, which are used to define marks in individual
subject of each student. Roll number of each student will be generated automatically.*/

#include <iostream>
using namespace std;

class Marks
{
protected:
    string name;
    int roll_no;

public:
    int marks;
    Marks(int roll = 0, string name = " ", int marks = 0) {}

    void setinfo(int roll, string studentname, int studentmarks)
    {
        roll_no = roll;
        name = studentname;
        marks = studentmarks;
    }

    void displayInfo()
    {
        cout << "Roll Number: " << roll_no << endl;
        cout << "Name: " << name << endl;
        cout << "Marks: " << marks << endl;
    }
};
class Physics : public Marks
{
public:
    void setphysicsmarks(int marks)
    {
        this->marks = marks;
    }
};
class Chemistry : public Marks
{
public:
    void setchemistrymarks(int marks)
    {
        this->marks = marks;
    }
};
class Mathematics : public Marks
{
public:
    void setmathematicsmarks(int marks)
    {
        this->marks = marks;
    }
};
int main()
{
    int numStudents;

    cout << "Enter the number of students: ";
    cin >> numStudents;

    Physics physicsStudents[numStudents];
    Chemistry chemistryStudents[numStudents];
    Mathematics mathStudents[numStudents];

    for (int i = 0; i < numStudents; i++)
    {
        int roll;
        string name;
        int physicsMarks, chemistryMarks, mathMarks;

        cout << "\nEnter details for student " << i + 1 << ":" << endl;
        cout << "Roll Number: ";
        cin >> roll;
        cout << "Name: ";
        cin.ignore();
        getline(cin, name);
        cout << "Physics Marks: ";
        cin >> physicsMarks;
        cout << "Chemistry Marks: ";
        cin >> chemistryMarks;
        cout << "Mathematics Marks: ";
        cin >> mathMarks;

        physicsStudents[i].setinfo(roll, name, physicsMarks);
        chemistryStudents[i].setinfo(roll, name, chemistryMarks);
        mathStudents[i].setinfo(roll, name, mathMarks);
    }

    // Calculate total marks for each student and average marks for the class
    int totalPhysics = 0;
    int totalChemistry = 0;
    int totalMath = 0;

    for (int i = 0; i < numStudents; ++i)
    {
        totalPhysics += physicsStudents[i].marks;
        totalChemistry += chemistryStudents[i].marks;
        totalMath += mathStudents[i].marks;
    }

    int averagePhysics = totalPhysics / numStudents;
    int averageChemistry = totalChemistry / numStudents;
    int averageMath = totalMath / numStudents;

    cout << "\nAverage Physics Marks: " << averagePhysics << endl;
    cout << "Average Chemistry Marks: " << averageChemistry << endl;
    cout << "Average Mathematics Marks: " << averageMath << endl;

    return 0;
}