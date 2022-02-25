#include <string>
#include <iostream>
#include "duration_test.hpp"
using namespace std;

void DurationTest::set_up() {
    duration = new Duration(30);
    estado = sucess;
}

void DurationTest::tear_down() {
    delete duration;
}

int DurationTest::run() {
    set_up();
    sucessful_test_block(60);
    failure_test_block(15);
    tear_down();

    return estado;
}

void DurationTest::sucessful_test_block(unsigned int duration) {
    cout << "Testando valor válido" << endl;
    try {
        cout << "Horario testado: " << duration << endl << endl;
        this->duration->setDuration(duration);
        cout << "Valor aceito!" << endl;
        cout << "O valor atual é: " << this->duration->getDuration() << endl;
    } catch(invalid_argument& message) {
        cout << "Valor rejeitado!" << endl;
        cout << "Mensagem de erro: " << message.what() << endl;
        estado = failure;
    }
    cout << "\n==============================\n\n";
}

void DurationTest::failure_test_block(unsigned int duration) {
    cout << "Testando valor inválido" << endl;
    try {
        cout << "Horario testado: " << duration << endl << endl;
        this->duration->setDuration(duration);
        cout << "Valor aceito!" << endl;
        cout << "O valor atual é: " << this->duration->getDuration() << endl;
        estado = failure;
    } catch(invalid_argument& message) {
        cout << "Valor rejeitado!" << endl;
        cout << "Mensagem de erro: " << message.what() << endl;
    }
    cout << "\n==============================\n\n";
}
