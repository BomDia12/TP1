#include "nota_test.hpp"
#include <iostream>
using namespace std;

void test_block(unsigned int nota) {
    try {
        cout << "Nome testado: " << nota << endl << endl;
        Nota obj = Nota(nota);
        cout << "Valor aceito!" << endl;
        cout << "O valor atual é: " << obj.getNota() << endl;
    } catch(invalid_argument& message) {
        cout << "Valor rejeitado!" << endl;
        cout << "Mensagem de erro: " << message.what() << endl;
    }
    cout << "\n==============================\n\n";
};

void NotaTest::set_up() {
    nota = new Nota(1);
    estado = sucess;
}

void NotaTest::tear_down() {
    delete nota;
}

int NotaTest::run() {
    set_up();
    sucessful_test_block(5);
    failure_test_block(6);

    return estado;
}

void NotaTest::sucessful_test_block(unsigned int nota) {
    cout << "Testando valor válido" << endl;
    try {
        cout << "Valor testado: " << nota << endl << endl;
        this->nota->setNota(nota);
        cout << "Valor aceito!" << endl;
        cout << "O valor atual é: " << this->nota->getNota() << endl;
    } catch(invalid_argument& message) {
        cout << "Valor rejeitado!" << endl;
        cout << "Mensagem de erro: " << message.what() << endl;
        estado = failure;
    }
    cout << "\n==============================\n\n";
}

void NotaTest::failure_test_block(unsigned int nota) {
    cout << "Testando valor inválido" << endl;
    try {
        cout << "Valor testado: " << nota << endl << endl;
        this->nota->setNota(nota);
        cout << "Valor aceito!" << endl;
        cout << "O valor atual é: " << this->nota->getNota() << endl;
        estado = failure;
    } catch(invalid_argument& message) {
        cout << "Valor rejeitado!" << endl;
        cout << "Mensagem de erro: " << message.what() << endl;
    }
    cout << "\n==============================\n\n";
}
