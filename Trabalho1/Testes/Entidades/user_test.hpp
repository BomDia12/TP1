#ifndef USER_TESTS
#define USER_TESTS
#include "../../Entidades/user.hpp"
using namespace std;

class UserTest {
    private:
        inline static const int sucess = 0;
        inline static const int failure = 1;
        int state;
        User *user;

        void set_up();
        void tear_down();

        void failure_email_test_block(string);
        void sucessful_email_test_block(string);

        void failure_name_test_block(string);
        void sucessful_name_test_block(string);

        void failure_password_test_block(string);
        void sucessful_password_test_block(string);
    public:
        int run();
};

#endif