#include <string>
#include "../../Dominios/city.hpp"
using namespace std;

/**
 * @brief Classe que testa o domínio city
 *
 * @author Arthur Mota Furtado - 200014935
 */
class CityTest {
    private:
        inline static const int sucess = 0;
        inline static const int failure = 1;
        int estado;
        City *city;
        void tear_down();
        void set_up();
        void sucessful_test_block(string city);
        void failure_test_block(string city);
    public:
        int run();
};
