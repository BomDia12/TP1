#include <string>
using namespace std;

class Date {
    private:
        unsigned int day;
        string month;
        unsigned int year;
        void validate(unsigned int day, string month, unsigned int year);
        unsigned int getDay(string date);
        string getMonth(string date);
        unsigned int getYear(string date);
        inline static const string valid_months[12] = {
            "Jan", "Fev", "Mar", "Abr", "Mai", "Jun", "Jul", "Ago", "Set", "Out", "Nov", "Dez"
        };
        inline static const string long_months[7] = {
            "Jan", "Mar", "Mai", "Jul", "Ago", "Out", "Dez"
        };
    public:
        Date(unsigned int day, string month, unsigned int year);
        Date(string date);
        string getDate();
        void setDate(unsigned int day, string month, unsigned int year);
        void setDate(string date);
};
