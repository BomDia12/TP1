#include <string>
#include <stdio.h>
#include <ctype.h>
#include <iostream>
#include "codigo.hpp"
using namespace std;

Codigo::Codigo (unsigned int codigo) {
    validate(codigo);
    this->codigo = codigo;
}

void Codigo::setCodigo (unsigned int codigo) {
    validate(codigo);
    this->codigo = codigo;
}

void Codigo::validate (unsigned int codigo) {
    if (codigo > 10000000 || codigo < 1000000)
        throw invalid_argument("Código deve ter 7 dígitos");
    
    int verificador = codigo % 10;
    int d1          = (codigo / 10) % 10;
    int d2          = (codigo / 100) % 10;
    int d3          = (codigo / 1000) % 10;
    int d4          = (codigo / 10000) % 10;
    int d5          = (codigo / 100000) % 10;
    int d6          = (codigo / 1000000) % 10;

    if ((d1 + d2 + d3 + d4 + d5 + d6) % 10 > verificador )
        throw invalid_argument("O verificador não bate com o resto do número!");
    
    if (codigo / 10 == (000000))
        throw invalid_argument("Não existe código 000000");
}
