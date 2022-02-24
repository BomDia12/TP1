#include <string>
#include <iostream>
#include "address_test.hpp"
using namespace std;

int AddressTest::run() {
    set_up();
    successful_test_block("Serra de Arga");
    failure_test_block("Serra de Arga  ");
    tear_down();

    return 0;
}

void AddressTest::set_up() {
    address = new Address("Serra de Arga");
    estado = success;
}

void AddressTest::tear_down() {
    delete address;
}

void AddressTest::successful_test_block(string address) {
    cout << "Testando valor válido" << endl;
    try {
        cout << "Horario testado: " << address << endl << endl;
        this->address->setAddress(address);
        cout << "Valor aceito!" << endl;
        cout << "O valor atual é: " << this->address->getAddress() << endl;
    } catch(invalid_argument& message) {
        cout << "Valor rejeitado!" << endl;
        cout << "Mensagem de erro: " << message.what() << endl;
        estado = failure;
    }
    cout << "\n==============================\n\n";
}

void AddressTest::failure_test_block(string address) {
    cout << "Testando valor inválido" << endl;
    try {
        cout << "Horario testado: " << address << endl << endl;
        this->address->setAddress(address);
        cout << "Valor aceito!" << endl;
        cout << "O valor atual é: " << this->address->getAddress() << endl;
        estado = failure;
    } catch(invalid_argument& message) {
        cout << "Valor rejeitado!" << endl;
        cout << "Mensagem de erro: " << message.what() << endl;
    }
    cout << "\n==============================\n\n";
}