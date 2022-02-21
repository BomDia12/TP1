#include <iostream>
#include <string>
#include "name_test.hpp"
using namespace std;

void test_block(string test_name) {
    try {
        cout << "Nome testado: " << test_name << endl << endl;
        Name obj = Name(test_name);
        cout << "Valor aceito!" << endl;
        cout << "O valor atual é: " << obj.getName() << endl;
    } catch(invalid_argument& message) {
        cout << "Valor rejeitado!" << endl;
        cout << "Mensagem de erro: " << message.what() << endl;
    }
    cout << "\n==============================\n\n";
};

int main () {

    cout << "Testando com nome válido" << endl;

    test_block("Bom. Dia.");

    cout << "Testando com nome inválido" << endl;

    test_block("Bom . dia");

    return 0;
};