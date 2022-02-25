#include <string>
#include "../../Dominios/language.hpp"
using namespace std;

/**
 * @brief Classe que testa o domínio Language
 *
 * @author Arthur Mota Furtado - 200014935
 */
class LanguageTest {
    private:
        inline static const int sucess = 0;
        inline static const int failure = 1;
        int estado;
        Language *language;
        void tear_down();
        void set_up();
        void sucessful_test_block(string language);
        void failure_test_block(string language);
    public:
        int run();
};