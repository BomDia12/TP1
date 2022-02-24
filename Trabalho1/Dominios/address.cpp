#include <string>
#include <iostream>
#include "address.hpp"
using namespace std;

Address::Address(string value) {
    validate(value);
    this->value = value;
}

void Address::validate(string value) {
    int size = value.size();

    if (size < 0 || size > 20)
        throw invalid_argument("Endereço não está entre 0 e 20 caracteres.");

    for (int i = 0; i < size; i++) {

        if (value[i] == ' ' && value[i+1] == ' ')
            throw invalid_argument("Espaços não podem estar em sequência.");

        if (value[i] == '.' && value[i+1] == '.')
            throw invalid_argument("Pontos não podem estar em sequência.");

    }
}