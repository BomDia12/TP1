#include <string>
#include <iostream>
#include "codigo.hpp"
using namespace std;

Codigo::Codigo (string codigo) {
    validate(codigo);
    this->codigo = codigo;
}

void Codigo::setCodigo (string codigo) {
    validate(codigo);
    this->codigo = codigo;
}

void Codigo::validate (string codigo) {
    if (codigo.length() != 7)
        throw invalid_argument("Código tem que ter 7 dígitos");
    
    int digit_sum = (codigo[0] - '0') + (codigo[1] - '0') + (codigo[2] - '0') +
                    (codigo[3] - '0') + (codigo[4] - '0') + (codigo[5] - '0');
    
    if (digit_sum % 10 != (codigo[6] - '0'))
        throw invalid_argument("O dígito verificador não é válido!");
    
    if (codigo.substr(0, 6) == "000000")
        throw invalid_argument("O código 000000 não é válido");
}
