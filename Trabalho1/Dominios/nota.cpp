#include "nota.hpp"
#include <iostream>
using namespace std;

Nota::Nota(unsigned int nota) {
    validate(nota);
    this->nota = nota;
}

void Nota::setNota(unsigned int nota) {
    validate(nota);
    this->nota = nota;
}

void Nota::validate(unsigned int nota) {
    if (nota > limite) 
        throw invalid_argument("A nota não pode ser maior que 5");
}

Nota::Nota() {
    nota = 0;
}
