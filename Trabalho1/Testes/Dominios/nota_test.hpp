#include "../../Dominios/nota.hpp"

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
