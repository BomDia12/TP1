#include <string>
#include <iostream>
#include "address_test.hpp"
using namespace std;

void test_block(string value) {
     try {
        Address *obj;
        cout << "Valor testado: " << value << endl << endl;
        obj = new Address(value);
        cout << "Valor aceito!" << endl;
        cout << "O valor atual é: " << obj->getAddress() << endl;
    } catch(invalid_argument& message) {
        cout << "Valor rejeitado!" << endl;
        cout << "Mensagem de erro: " << message.what() << endl;
    }
    cout << "\n==============================\n\n";
}

int main () {

    cout << "Testando valor válido:" << endl;

    test_block("Serra de Arga");

    cout << "Testando valor inválido:" << endl;

    test_block("Serra de Arga  ");

    cout << "Testando valor inválido:" << endl;

    test_block("Serra de Arga..");

    return 0;
}
