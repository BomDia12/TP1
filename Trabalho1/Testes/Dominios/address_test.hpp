#include <string>
#include "../../Dominios/address.hpp"
using namespace std;

class AddressTest {
    private:
        inline static const int success = 0;
        inline static const int failure = 1;
        int estado;
        Address *address;
        void tear_down();
        void set_up();
        void successful_test_block(string value);
        void failure_test_block(string value);
    public:
        int run();
};
