#include <string>
#include "../../Dominios/codigo.hpp"

/**
 * @brief Classe que testa o domínio código
 *
 * @author Arthur Mota Furtado - 200014935
 */
class CodigoTest {
    private:
        inline static const int sucess = 0;
        inline static const int failure = 1;
        int estado;
        Codigo *codigo;
        void tear_down();
        void set_up();
        void sucessful_test_block(string value);
        void failure_test_block(string value);
    public:
        int run();
};
