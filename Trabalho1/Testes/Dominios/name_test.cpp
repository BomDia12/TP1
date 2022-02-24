#include <iostream>
#include <string>
#include "name_test.hpp"
using namespace std;

void NameTest::set_up() {
    name = new Name("Nome Inicial");
    estado = sucess;
}

void NameTest::tear_down() {
    delete name;
}

int NameTest::run() {
    set_up();
    sucessful_test_block("Bom. Dia.");
    failure_test_block("Bom. dia");
    tear_down();

    return estado;
}

void NameTest::sucessful_test_block(string name) {
    cout << "Testando valor válido" << endl;
    try {
        cout << "Horario testado: " << name << endl << endl;
        this->name->setName(name);
        cout << "Valor aceito!" << endl;
        cout << "O valor atual é: " << this->name->getName() << endl;
    } catch(invalid_argument& message) {
        cout << "Valor rejeitado!" << endl;
        cout << "Mensagem de erro: " << message.what() << endl;
        estado = failure;
    }
    cout << "\n==============================\n\n";
}

void NameTest::failure_test_block(string name) {
    cout << "Testando valor inválido" << endl;
    try {
        cout << "Horario testado: " << name << endl << endl;
        this->name->setName(name);
        cout << "Valor aceito!" << endl;
        cout << "O valor atual é: " << this->name->getName() << endl;
        estado = failure;
    } catch(invalid_argument& message) {
        cout << "Valor rejeitado!" << endl;
        cout << "Mensagem de erro: " << message.what() << endl;
    }
    cout << "\n==============================\n\n";
}
