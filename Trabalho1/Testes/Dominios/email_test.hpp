#ifndef EMAIL_TEST
#define EMAIL_TEST
#include "../../Dominios/email.hpp"

/**
 * @brief Classe que testa o domínio email
 * 
 * @author Arthur Mota Furtado - 200014935
 */
class EmailTest {
    private:
        inline const static int success = 0;
        inline const static int failure = 1;
        int state;

        Email *email;

        void set_up();
        void tear_down();

        void success_test_block(string);
        void failure_test_block(string);
    public:
        int run();
};

inline void EmailTest::set_up() {
    email = new Email();
    state = success;
}

inline void EmailTest::tear_down() {
    delete email;
}

#endif