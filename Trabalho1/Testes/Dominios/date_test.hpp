#include "../../Dominios/date.hpp"
#include <string>
using namespace std;

class DateTest {
    private:
        inline static const int sucess = 0;
        inline static const int failure = 1;
        int estado;
        Date *date;
        void tear_down();
        void set_up();
        void sucessful_test_block(string date);
        void failure_test_block(string date);
    public:
        int run();
};
