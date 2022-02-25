#include <string>
#include <iostream>
#include "description_test.hpp"
using namespace std;

int DescriptionTest::run() {
    set_up();
    sucessful_test_block("Civilizações castrejas");
    failure_test_block("Civilizações castrejas  ");
    failure_test_block("Civilizações castrejas..");
    tear_down();

    return estado;
}

void DescriptionTest::set_up() {
    description = new Description("Civilizações castrejas.");
    estado = sucess;
}

void DescriptionTest::tear_down() {
    delete description;
}

void DescriptionTest::sucessful_test_block(string value) {
    cout << "Testando valor válido" << endl;
    try {
        cout << "Horario testado: " << value << endl << endl;
        this->description->setDescription(value);
        cout << "Valor aceito!" << endl;
        cout << "O valor atual é: " << this->description->getDescription() << endl;
    } catch(invalid_argument& message) {
        cout << "Valor rejeitado!" << endl;
        cout << "Mensagem de erro: " << message.what() << endl;
        estado = failure;
    }
    cout << "\n==============================\n\n";
}

void DescriptionTest::failure_test_block(string value) {
    cout << "Testando valor inválido" << endl;
    try {
        cout << "Horario testado: " << value << endl << endl;
        this->description->setDescription(value);
        cout << "Valor aceito!" << endl;
        cout << "O valor atual é: " << this->description->getDescription() << endl;
        estado = failure;
    } catch(invalid_argument& message) {
        cout << "Valor rejeitado!" << endl;
        cout << "Mensagem de erro: " << message.what() << endl;
    }
    cout << "\n==============================\n\n";
}
