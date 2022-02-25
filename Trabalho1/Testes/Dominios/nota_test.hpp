#include "../../Dominios/nota.hpp"

/**
 * @brief Classe que testa o domínio nota
 *
 * @author Arthur Mota Furtado - 200014935
 */
class NotaTest {
    private:
        inline static const int sucess = 0;
        inline static const int failure = 1;
        int estado;
        Nota *nota;
        void tear_down();
        void set_up();
        void sucessful_test_block(unsigned int nota);
        void failure_test_block(unsigned int nota);
    public:
        int run();
};
