#include <string>
#include <iostream>
#include "description.hpp"
#include <regex>
using namespace std;

Description::Description(string value) {
    validate(value);
    this->value = value;
}

void Description::validate(string value) {
    int size = value.size();

    if (size < 0 || size > 30)
        throw invalid_argument("Descrição não está entre 0 e 30 caracteres.");

    for (int i = 0; i < size; i++) {

        if (value[i] == ' ' && value[i+1] == ' ')
            throw invalid_argument("Espaços não podem estar em sequência.");

        if (value[i] == '.' && value[i+1] == '.')
            throw invalid_argument("Pontos não podem estar em sequência.");

    }
}