// Convert time from HH:MM:SS format to seconds using class program in C++

#include <iostream>
#include <iomanip>
using namespace std;

class Time
{
private:
    int seconds;
    int hh;
    int mm;
    int ss;

public:
    void getTime(void)
    {
        cout << "Enter time: " << endl;
        cout << "Hour ? ";
        cin >> hh;
        cout << "Minute ? ";
        cin >> mm;
        cout << "Second ? ";
        cin >> ss;
    }
    void convertIntoSecond(void)
    {
        seconds = hh * 3600 + mm * 60 + ss;
    }
    void displaytime(void)
    {
        cout << "Time is: " << setw(2) << setfill('0') << hh << " : " << setw(2) << setfill('0') << mm << " : " << setw(2) << setfill('0') << ss << endl;
        cout << "The total second is: " << seconds;
    }
};
int main()
{
    Time t;

    t.getTime();
    t.displaytime();
    t.convertIntoSecond();

    return 0;
}