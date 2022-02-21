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

        if (n[i] == ' ') {
            if (i + 1 == size)
                throw invalid_argument("Espaço não pode terminar o nome");

            if (n[i + 1] == '.')
                throw invalid_argument("Ponto tem que suceder uma letra");

            if (n[i + 1] == ' ')
                throw invalid_argument("Espaços não podem estar estar em sequencia");

            if (!(n[i + 1] == 'A' || n[i + 1] == 'B' || n[i + 1] == 'C' || n[i + 1] == 'D' || n[i + 1] == 'E' || n[i + 1] == 'F' || n[i + 1] == 'G' ||
                  n[i + 1] == 'H' || n[i + 1] == 'I' || n[i + 1] == 'J' || n[i + 1] == 'K' || n[i + 1] == 'L' || n[i + 1] == 'M' || n[i + 1] == 'N' ||
                  n[i + 1] == 'O' || n[i + 1] == 'P' || n[i + 1] == 'Q' || n[i + 1] == 'R' || n[i + 1] == 'S' || n[i + 1] == 'T' || n[i + 1] == 'U' ||
                  n[i + 1] == 'V' || n[i + 1] == 'W' || n[i + 1] == 'X' || n[i + 1] == 'Y' || n[i + 1] == 'Z'))
                    throw invalid_argument("Primeira letra de cada termo é letra maiúscula");
        }

        if (n[i] == '.') {
            if (i == 0)
                throw invalid_argument("Ponto não pode começar o nome");
            
            if (!(n[i - 1] == 'a' || n[i - 1] == 'b' || n[i - 1] == 'c' || n[i - 1] == 'd' || n[i - 1] == 'e' || n[i - 1] == 'f' || n[i - 1] == 'g' ||
                  n[i - 1] == 'h' || n[i - 1] == 'i' || n[i - 1] == 'j' || n[i - 1] == 'k' || n[i - 1] == 'l' || n[i - 1] == 'm' || n[i - 1] == 'n' ||
                  n[i - 1] == 'o' || n[i - 1] == 'p' || n[i - 1] == 'q' || n[i - 1] == 'r' || n[i - 1] == 's' || n[i - 1] == 't' || n[i - 1] == 'u' ||
                  n[i - 1] == 'v' || n[i - 1] == 'w' || n[i - 1] == 'x' || n[i - 1] == 'y' || n[i - 1] == 'z'))
                    throw invalid_argument("Ponto deve ser precedido por letra");
            
            if (i + 1 < size) {
                if (n[i + 1] != ' ')
                    throw invalid_argument("Ponto deve ser sucedido por um espaço");

                if (n[i + 1] == '.')
                    throw invalid_argument("Ponto não pode ser sucedido por um espaço");
            }
        }
    }
}

Name::Name(string n) {
    validate(n);
    value = n;
}
