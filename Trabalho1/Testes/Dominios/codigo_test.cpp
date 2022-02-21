#include <iostream>
#include "codigo_test.hpp"
#include <string>
using namespace std;

void test_block(string codigo) {
     try {
        Codigo *obj;
        cout << "Nome testado: " << codigo << endl << endl;
        obj = new Codigo(codigo);
        cout << "Valor aceito!" << endl;
        cout << "O valor atual é: " << obj->getCodigo() << endl;
    } catch(invalid_argument& message) {
        cout << "Valor rejeitado!" << endl;
        cout << "Mensagem de erro: " << message.what() << endl;
    }
    cout << "\n==============================\n\n";
}

int main () {

    cout << "Testando com valor válido" << endl;

    test_block("1234561");

    cout << "Testando com valor inválido" << endl;

    test_block("0000000");


    return 0;
}
