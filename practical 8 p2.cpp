#include <iostream>
using namespace std;
class Time 
{
private:
    int hours;
    int minutes;

public:
    
    Time(int h = 0, int m = 0) : hours(h), minutes(m) {}

    
    void displayTime() const 
    {
        cout << "Time: " << hours << " hours " << minutes << " minutes" << endl;
    }

   
    Time totalTime(const Time& t1, const Time& t2) const 
    {
        int totalHours = t1.hours + t2.hours;
        int totalMinutes = t1.minutes + t2.minutes;

        
        totalHours += totalMinutes / 60;
        totalMinutes %= 60;

        return Time(totalHours, totalMinutes);
    }
};

int main() 
{
    Time time1(2, 45);
    Time time2(1, 30);

    
    cout << "Time 1:" << endl;
    time1.displayTime();
    cout << "Time 2:" << endl;
    time2.displayTime();

    
    Time total = time1.totalTime(time1, time2);
    cout << "Total time:" << endl;
    total.displayTime();

    return 0;
}
