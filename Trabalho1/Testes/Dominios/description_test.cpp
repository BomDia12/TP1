#include <string>
#include <iostream>
#include "description_test.hpp"
using namespace std;

void test_block(string value) {
     try {
        Description *obj;
        cout << "Valor testado: " << value << endl << endl;
        obj = new Description(value);
        cout << "Valor aceito!" << endl;
        cout << "O valor atual é: " << obj->getDescription() << endl;
    } catch(invalid_argument& message) {
        cout << "Valor rejeitado!" << endl;
        cout << "Mensagem de erro: " << message.what() << endl;
    }
    cout << "\n==============================\n\n";
}

int main () {

    cout << "Testando valor válido:" << endl;

    test_block("Civilizações castrejas");

    cout << "Testando valor inválido:" << endl;

    test_block("Civilizações castrejas  ");

    cout << "Testando valor inválido:" << endl;

    test_block("Civilizações castrejas..");

    return 0;
}
