#include <string>
#include "../../Dominios/password.hpp"
using namespace std;

/**
 * @brief Classe que testa o domínio password
 *
 * @author Pedro Venzi - 200042696
 */
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
