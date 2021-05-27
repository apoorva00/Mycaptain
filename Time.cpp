#include <iostream>
#include <iomanip>
 
using namespace std;
 
class Time
{
    private:
        int seconds;
        int hh,mm,ss;
    public:
        void getTime(void);
        void convertIntoSec(void);
        void displayTime(void);
};
 
void Time::getTime(void)
{
    cout << "Enter time:" << endl;
    cout << "Hours?   ";          
	cin >> hh;
    cout << "Minutes? ";          
	cin >> mm;
    cout << "Seconds? ";          
	cin >> ss;
}
 
void Time::convertIntoSec(void)
{
    seconds = hh*3600 + mm*60 + ss;
}
 
void Time::displayTime(void)
{
    cout << "The time is = " << setw(3) << setfill('0') << hh << ":"
                             << setw(3) << setfill('0') << mm << ":"
                             << setw(3) << setfill('0') << ss << endl;
    cout << "Time in total seconds: " << seconds;
}
 
int main()
{
    Time T; 
     
    T.getTime();
    T.convertIntoSec();
    T.displayTime();
     
    return 0;
}