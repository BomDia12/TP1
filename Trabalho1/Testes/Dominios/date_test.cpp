#include "date_test.hpp"
#include <string>
#include <iostream>
using namespace std;

void test_block(string date) {
    try {
        cout << "Data testada: " << date << endl << endl;
        Date obj = Date(date);
        cout << "Valor aceito!" << endl;
        cout << "O valor atual é: " << obj.getDate() << endl;
    } catch(invalid_argument& message) {
        cout << "Valor rejeitado!" << endl;
        cout << "Mensagem de erro: " << message.what() << endl;
    }
    cout << "\n==============================\n\n";
};

int main () {

    cout << "Testando com data válida" << endl;

    test_block("01-Mar-2000");

    cout << "Testando com data inválida" << endl;

    test_block("02-Fev-1999");

    return 0;
};