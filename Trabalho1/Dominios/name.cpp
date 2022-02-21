#include "name.hpp"
#include <stdio.h>
#include <ctype.h>
#include <iostream>
#include <string>
#include <regex>
using namespace std;

void Name::validate(string n) {
    int size = n.size();

    if (!regex_match(n, regex("[a-zA-Z .]*")))
        throw invalid_argument("Só pode conter letras pontos e espaços");

    if (size < 5 || size > 20)
        throw invalid_argument("Nome não está entre 5 e 20 caracteres");
    
    for (int i = 0; i < size; i++) {

        if (!isalpha(n[i + 1]))

        if (n[i] == ' ') {
            if (i + 1 == size)
                throw invalid_argument("Espaço não pode terminar o nome");

            if (n[i + 1] == '.')
                throw invalid_argument("Ponto tem que suceder uma letra");

            if (n[i + 1] == ' ')
                throw invalid_argument("Espaços não podem estar estar em sequencia");

            if (isupper(n[i + 1]) == 0)
                throw invalid_argument("Primeira letra de cada termo é letra maiúscula");
        }

        if (n[i] == '.') {
            if (i == 0)
                throw invalid_argument("Ponto não pode começar o nome");
            
            if (!isalpha(n[i - 1]))
                throw invalid_argument("Ponto deve ser precedido de Letra");
            
            if (i + 1 < size) {
                if (n[i + 1] != ' ')
                    throw invalid_argument("Ponto deve ser sucedido por um espaço");
            }
        }
    }
}

Name::Name(string n) {
    validate(n);
    value = n;
}

inline string Name::getName() {
    return value;
}

inline void Name::setName(string n) {
    validate(n);
    value = n;
}

int main () {
    cout << "Entre um nome: ";
    string name;
    getline(cin, name);
    try {
        Name obj = Name(name);
        cout << obj.getName();
    } catch (invalid_argument& message) {
        cout << "Erro no sistema: " << message.what() << endl;
        return 1;
    }

    return 0;
}
