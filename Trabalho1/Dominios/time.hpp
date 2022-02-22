#include <string>
#include <iostream>

using namespace std;

class Time {
    private:
        string horario;
        bool validate(string horario);
    public:
        Time(string horario);
        string getTime();
        void setTime(string horario);

};