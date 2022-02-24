#include <string>
#include <iostream>

using namespace std;

class Time {
    private:
        string time;
        void validate(string time);
    public:
        Time(string time);
        string getTime();
        void setTime(string time);

};

inline string Time::getTime() {
    return time;
}