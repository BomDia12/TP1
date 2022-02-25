#include "../../Dominios/time.hpp"
#include <string>
using namespace std;

/**
 * @brief Classe que testa o domínio time
 *
 * @author Arthur Mota Furtado - 200014935
 */
class TimeTest {
    private:
        inline static const int sucess = 0;
        inline static const int failure = 1;
        int estado;
        Time *time;
        void tear_down();
        void set_up();
        void sucessful_test_block(string time);
        void failure_test_block(string time);
    public:
        int run();
};