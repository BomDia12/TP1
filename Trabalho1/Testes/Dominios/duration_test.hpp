#include "../../Dominios/duration.hpp"
using namespace std;

class DurationTest {
    private:
        inline static const int sucess = 0;
        inline static const int failure = 1;
        int estado;
        Duration *duration;
        void tear_down();
        void set_up();
        void sucessful_test_block(unsigned int duration);
        void failure_test_block(unsigned int duration);
    public:
        int run();
};
