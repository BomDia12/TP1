#include "time_test.hpp"
#include <string>
#include <iostream>
using namespace std;

void test_block(string time) {
    try {
        cout << "Horario testado: " << time << endl << endl;
        Time obj = Time(time);
        cout << "Valor aceito!" << endl;
        cout << "O valor atual é: " << obj.getTime() << endl;
    } catch(invalid_argument& message) {
        cout << "Valor rejeitado!" << endl;
        cout << "Mensagem de erro: " << message.what() << endl;
    }
    cout << "\n==============================\n\n";
};

int main () {

    cout << "Testando com horario válido" << endl;

    test_block("23:59");

    cout << "Testando com data inválida" << endl;

    test_block("24:00");

    cout << "Testando com data inválida" << endl;

    test_block("23:60");

    cout << "Testando com data inválida" << endl;

    test_block("23-60");

    cout << "Testando com data inválida" << endl;

    test_block("023:50");

    return 0;
};