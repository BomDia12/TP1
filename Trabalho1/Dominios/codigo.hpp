#ifndef CODIGO
#define CODIGO
#include <string>
using namespace std;

class Codigo {
    private:
        string codigo;
        void validate(string codigo);
    public:
        Codigo();
        Codigo(string codigo);
        string getCodigo();
        void setCodigo(string codigo);
};

inline string Codigo::getCodigo() {
    return codigo;
}

#endif
