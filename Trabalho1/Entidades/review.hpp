#include "../Dominios/nota.hpp"
#include "../Dominios/codigo.hpp"
#include "../Dominios/description.hpp"
using namespace std;

class Review {
    private:
        Nota nota;
        Codigo codigo;
        Description description;
    public:
        Review(Codigo);
        Review(Codigo, Nota);
        Review(Codigo, Nota, Description);
        string getNota();
        string getCodigo();
        Description getDescription();
        void setNota();
        void setCodigo();
        void setDescription();
};
