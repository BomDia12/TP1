#include <string>
#include <iostream>
#include "duration_test.hpp"
using namespace std;

void test_block(int value) {
     try {
        Duration *obj;
        cout << "Nome testado: " << value << endl << endl;
        obj = new Duration(value);
        cout << "Valor aceito!" << endl;
        cout << "O valor atual é: " << obj->getDuration() << endl;
    } catch(invalid_argument& message) {
        cout << "Valor rejeitado!" << endl;
        cout << "Mensagem de erro: " << message.what() << endl;
    }
    cout << "\n==============================\n\n";
}

int main () {

    cout << "Testando valor válido:" << endl;

    test_block(60);

    cout << "Testando valor inválido:" << endl;

    test_block(15);

    return 0;
}
