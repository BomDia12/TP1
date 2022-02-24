#include "date_test.hpp"
#include <string>
#include <iostream>
using namespace std;

int DateTest::run() {
    set_up();
    sucessful_test_block("01-Mar-2000");
    failure_test_block("02-Fev-1999");
    tear_down();

    return 0;
};

void DateTest::set_up() {
    date = new Date("29-Fev-2020");
    estado = sucess;
}

void DateTest::tear_down() {
    delete date;
}

void DateTest::sucessful_test_block(string date) {
    cout << "Testando valor válido" << endl;
    try {
        cout << "Horario testado: " << date << endl << endl;
        this->date->setDate(date);
        cout << "Valor aceito!" << endl;
        cout << "O valor atual é: " << this->date->getDate() << endl;
    } catch(invalid_argument& message) {
        cout << "Valor rejeitado!" << endl;
        cout << "Mensagem de erro: " << message.what() << endl;
        estado = failure;
    }
    cout << "\n==============================\n\n";
}

void DateTest::failure_test_block(string date) {
    cout << "Testando valor inválido" << endl;
    try {
        cout << "Horario testado: " << date << endl << endl;
        this->date->setDate(date);
        cout << "Valor aceito!" << endl;
        cout << "O valor atual é: " << this->date->getDate() << endl;
        estado = failure;
    } catch(invalid_argument& message) {
        cout << "Valor rejeitado!" << endl;
        cout << "Mensagem de erro: " << message.what() << endl;
    }
    cout << "\n==============================\n\n";
}
