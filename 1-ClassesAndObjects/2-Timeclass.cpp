#include <iostream>
using namespace std;
class TIME
{
private:
    int hours;
    int minutes;
    int seconds;

public:
    void gettime()
    {   
        cout << "Enter the time  in order hours minutes seconds" << endl;
        cin >> hours >> minutes >> seconds;
    }
    void settime(int h, int m, int s)
    {
        hours = h;
        minutes = m;
        seconds = s;
    }
    void showtime()
    {
        cout << hours << ":" << minutes << ":" << seconds << endl;
    }
    int convertime()
    {
        return seconds+minutes*60+hours*60;
    }



};
int main()
{
    TIME obj1, obj2;
    obj1.settime(4, 5, 55);
    obj2.gettime();

    obj1.showtime();
    obj2.showtime();

    return 0;
}