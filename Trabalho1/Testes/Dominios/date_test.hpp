#include "../../Dominios/date.hpp"
#include <string>
using namespace std;

/**
 * @brief Classe que testa o domínio date
 *
 * @author Arthur Mota Furtado - 200014935
 */
class DateTest {
    private:
        inline static const int sucess = 0;
        inline static const int failure = 1;
        int estado;
        Date *date;
        void tear_down();
        void set_up();
        void sucessful_test_block(string date);
        void failure_test_block(string date);
    public:
        int run();
};
