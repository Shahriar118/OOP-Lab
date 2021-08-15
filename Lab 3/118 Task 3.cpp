#include<iostream>
using namespace std;

class Time
{
    private:
        int hour;
        int minute;
        int second;
    public:
        Time()
        {
            hour = 1;
            minute = 1;
            second = 1;
        }
        int hours()
        {
            return hour;
        }
        int minutes()
        {
            return minute;
        }
        int seconds()
        {
            return second;
        }
        void reset(int h,int m,int s)
        {
            hour = h;
            minute = m;
            second = s;
        }
        void advance(int h,int m,int s)
        {
            int x = (second+s)/60;
            second = (second+s)%60;
            int y = (minute+m+x)/60;
            minute = (minute+m+x)%60;
            hour = (hour+h+y)%24;

        }
        void print()
        {
            cout << "\nCurrent time:\n";
            cout << "Hours  Minutes Seconds\n";
            cout << hour <<"    "<<minute<<"    "<<second<<endl;
        }
        ~Time()
        {

        }
};


int main()
{
    Time t;
    t.print();
    int h,m,s;
    cout << "Enter time to reset:\n";
    cin >> h >> m >> s;
    t.reset(h,m,s);
    t.print();
    int ah,am,as;
    cout << "Enter time to advance:\n";
    cin >> ah >> am >> as;
    t.advance(ah,am,as);
     t.print();
    return 0;
}


