#include <string>
using namespace std;

class Codigo {
    private:
        unsigned int codigo;
        void validate(unsigned int codigo);
    public:
        Codigo(unsigned int codigo);
        unsigned int getCodigo();
        void setCodigo(unsigned int codigo);
};

inline unsigned int Codigo::getCodigo() {
    return codigo;
}
