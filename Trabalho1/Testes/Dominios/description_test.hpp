#include <string>
#include "../../Dominios/description.hpp"
using namespace std;

/**
 * @brief Classe que testa o domínio description
 *
 * @author Arthur Mota Furtado - 200014935
 */
class DescriptionTest {
    private:
        inline static const int sucess = 0;
        inline static const int failure = 1;
        int estado;
        Description *description;
        void tear_down();
        void set_up();
        void sucessful_test_block(string value);
        void failure_test_block(string value);
    public:
        int run();
};
