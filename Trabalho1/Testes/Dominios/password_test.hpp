#include "../../Dominios/password.hpp"
#include <string>
using namespace std;

class PasswordTest {
    private:
        inline static const int success = 0;
        inline static const int failure = 1;
        int estado;
        Password *password;
        void tear_down();
        void set_up();
        void successful_test_block(string password);
        void failure_test_block(string password);
    public:
        int run();
};
