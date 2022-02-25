#include "title_test.hpp"
#include <iostream>
using namespace std;

int TitleTest::run() {
    set_up();

    success_test_block("Titulo");
    failure_test_block("");

    tear_down();

    return state;
}

void TitleTest::success_test_block(string value) {
    cout << "Testando valor válido" << endl;
    try {
        cout << "Título testado: " << value << endl << endl;
        title->setTitle(value);
        cout << "Valor aceito!" << endl;
        cout << "O valor atual é: " << title->getTitle() << endl;
    } catch(invalid_argument& message) {
        cout << "Valor rejeitado!" << endl;
        cout << "Mensagem de erro: " << message.what() << endl;
        state = failure;
    }
    cout << "\n==============================\n\n";
}

void TitleTest::failure_test_block(string value) {
    cout << "Testando valor inválido" << endl;
    try {
        cout << "Título testado: " << value << endl << endl;
        title->setTitle(value);
        cout << "Valor aceito!" << endl;
        cout << "O valor atual é: " << title->getTitle() << endl;
        state = failure;
    } catch(invalid_argument& message) {
        cout << "Valor rejeitado!" << endl;
        cout << "Mensagem de erro: " << message.what() << endl;
    }
    cout << "\n==============================\n\n";
}
