#ifndef REVIEW
#define REVIEW
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
        // Constructors
        Review();
        Review(Codigo);
        Review(Codigo, Nota);
        Review(Codigo, Nota, Description);

        // Get Methods
        string getCodigo();
        unsigned int getNota();
        string getDescription();

        // Set Methods
        void setCodigo(string);
        void setNota(unsigned int);
        void setDescription(string);
};

#endif
