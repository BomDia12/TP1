#include "../../Dominios/name.hpp"
#include <string>
using namespace std;

class NameTest {
    private:
        inline static const int sucess = 0;
        inline static const int failure = 1;
        int estado;
        Name *name;
        void tear_down();
        void set_up();
        void sucessful_test_block(string name);
        void failure_test_block(string name);
    public:
        int run();
};
