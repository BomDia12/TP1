#include "time_test.hpp"
#include <string>
#include <iostream>
using namespace std;

 void TimeTest::set_up() {
    time = new Time("23:59");
    estado = sucess;
}

void TimeTest::tear_down() {
    delete time;
}

void TimeTest::sucessful_test_block(string time) {
    cout << "Testando valor válido" << endl;
    try {
        cout << "Horario testado: " << time << endl << endl;
        Time obj = Time(time);
        cout << "Valor aceito!" << endl;
        cout << "O valor atual é: " << obj.getTime() << endl;
    } catch(invalid_argument& message) {
        cout << "Valor rejeitado!" << endl;
        cout << "Mensagem de erro: " << message.what() << endl;
        estado = failure;
    }
    cout << "\n==============================\n\n";
}

void TimeTest::failure_test_block(string time) {
    cout << "Testando valor inválido" << endl;
    try {
        cout << "Horario testado: " << time << endl << endl;
        Time obj = Time(time);
        cout << "Valor aceito!" << endl;
        cout << "O valor atual é: " << obj.getTime() << endl;
        estado = failure;
    } catch(invalid_argument& message) {
        cout << "Valor rejeitado!" << endl;
        cout << "Mensagem de erro: " << message.what() << endl;
    }
    cout << "\n==============================\n\n";
}

int TimeTest::run() {
    set_up();
    sucessful_test_block("23:59");
    failure_test_block("24:00");
    failure_test_block("23-59");
    failure_test_block("023:50");

    return estado;
}
