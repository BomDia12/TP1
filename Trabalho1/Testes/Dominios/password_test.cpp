#include <string>
#include <iostream>
#include "password_test.hpp"
using namespace std;

void PasswordTest::set_up() {
    password = new Password("Pedro1");
    estado = success;
}

void PasswordTest::tear_down() {
    delete password;
}

int PasswordTest::run() {
    set_up();
    successful_test_block("Pedro1");
    failure_test_block("Peedro");
    tear_down();

    return 0;
}

void PasswordTest::successful_test_block(string password) {
    cout << "Testando valor válido" << endl;
    try {
        cout << "Horario testado: " << password << endl << endl;
        this->password->setPassword(password);
        cout << "Valor aceito!" << endl;
        cout << "O valor atual é: " << this->password->getPassword() << endl;
    } catch(invalid_argument& message) {
        cout << "Valor rejeitado!" << endl;
        cout << "Mensagem de erro: " << message.what() << endl;
        estado = failure;
    }
    cout << "\n==============================\n\n";
}

void PasswordTest::failure_test_block(string password) {
    cout << "Testando valor inválido" << endl;
    try {
        cout << "Horario testado: " << password << endl << endl;
        this->password->setPassword(password);
        cout << "Valor aceito!" << endl;
        cout << "O valor atual é: " << this->password->getPassword() << endl;
        estado = failure;
    } catch(invalid_argument& message) {
        cout << "Valor rejeitado!" << endl;
        cout << "Mensagem de erro: " << message.what() << endl;
    }
    cout << "\n==============================\n\n";
}