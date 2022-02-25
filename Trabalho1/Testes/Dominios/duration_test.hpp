#include "../../Dominios/duration.hpp"
using namespace std;

/**
 * @brief Classe que testa o domínio duration
 *
 * @author Arthur Mota Furtado - 200014935
 */
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
