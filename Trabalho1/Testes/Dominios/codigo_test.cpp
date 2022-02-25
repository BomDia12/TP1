#include <iostream>
#include "codigo_test.hpp"
#include <string>
using namespace std;

int CodigoTest::run() {
    set_up();
    sucessful_test_block("1234561");
    failure_test_block("0000000");
    failure_test_block("1234567");
    tear_down();

    return estado;
}

void CodigoTest::set_up() {
    codigo = new Codigo("1234561");
    estado = sucess;
}

void CodigoTest::tear_down() {
    delete codigo;
}

void CodigoTest::sucessful_test_block(string codigo) {
    cout << "Testando valor válido" << endl;
    try {
        cout << "Horario testado: " << codigo << endl << endl;
        this->codigo->setCodigo(codigo);
        cout << "Valor aceito!" << endl;
        cout << "O valor atual é: " << this->codigo->getCodigo() << endl;
    } catch(invalid_argument& message) {
        cout << "Valor rejeitado!" << endl;
        cout << "Mensagem de erro: " << message.what() << endl;
        estado = failure;
    }
    cout << "\n==============================\n\n";
}

void CodigoTest::failure_test_block(string codigo) {
    cout << "Testando valor inválido" << endl;
    try {
        cout << "Horario testado: " << codigo << endl << endl;
        this->codigo->setCodigo(codigo);
        cout << "Valor aceito!" << endl;
        cout << "O valor atual é: " << this->codigo->getCodigo() << endl;
        estado = failure;
    } catch(invalid_argument& message) {
        cout << "Valor rejeitado!" << endl;
        cout << "Mensagem de erro: " << message.what() << endl;
    }
    cout << "\n==============================\n\n";
}
