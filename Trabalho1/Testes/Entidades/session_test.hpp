#ifndef SESSION_TESTS
#define SESSION_TESTS
#include "../../Entidades/session.hpp"
using namespace std;

/**
* @author Pedro Venzi - 200042696
*/

class SessionTest {
    private:
        inline static const int sucess = 0;
        inline static const int failure = 1;
        int state;
        Session *session;

        void set_up();
        void tear_down();

        void failure_code_test_block(string);
        void sucessful_code_test_block(string);

        void failure_time_test_block(string);
        void sucessful_time_test_block(string);

        void failure_date_test_block(string);
        void sucessful_date_test_block(string);

        void failure_language_test_block(string);
        void sucessful_language_test_block(string);
    public:
        int run();
};

#endif
