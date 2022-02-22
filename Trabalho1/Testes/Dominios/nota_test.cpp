#include "nota_test.hpp"
#include <iostream>
using namespace std;

void test_block(unsigned int nota) {
    try {
        cout << "Nome testado: " << nota << endl << endl;
        Nota obj = Nota(nota);
        cout << "Valor aceito!" << endl;
        cout << "O valor atual é: " << obj.getNota() << endl;
    } catch(invalid_argument& message) {
        cout << "Valor rejeitado!" << endl;
        cout << "Mensagem de erro: " << message.what() << endl;
    }
    cout << "\n==============================\n\n";
};

int main () {

    cout << "Testando com nome válido" << endl;

    test_block(5);

    cout << "Testando com nome inválido" << endl;

    test_block(6);

    return 0;
};
