#include <string>
#include "../../Dominios/language.hpp"
using namespace std;

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