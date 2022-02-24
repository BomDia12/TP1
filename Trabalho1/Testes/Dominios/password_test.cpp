#include <iostream>
#include <string>
#include "password_test.hpp"
using namespace std;

void test_block(string test_password) {
    try {
        cout << "Nome testado: " << test_password << endl << endl;
        Password obj = Password(test_password);
        cout << "Valor aceito!" << endl;
        cout << "O valor atual é: " << obj.getPassword() << endl;
    } catch(invalid_argument& message) {
        cout << "Valor rejeitado!" << endl;
        cout << "Mensagem de erro: " << message.what() << endl;
    }
    cout << "\n==============================\n\n";
};

int main () {

    cout << "Testando com senha válida" << endl;

    test_block("Pedro1");

    cout << "Testando com senha inválida" << endl;

    test_block("pedro1");

    cout << "Testando com senha inválida" << endl;

    test_block("Pedro12");

    cout << "Testando com senha inválida" << endl;

    test_block("Peedro");

    return 0;
};