#include "email_test.hpp"

int EmailTest::run(){
    set_up();

    success_test_block("bom@dia.com");
    failure_test_block("");

    tear_down();

    return state;
}

void EmailTest::success_test_block(string value) {
    cout << "Testando valor válido" << endl;
    try {
        cout << "Horario testado: " << value << endl << endl;
        email->setEmail(value);
        cout << "Valor aceito!" << endl;
        cout << "O valor atual é: " << email->getEmail() << endl;
    } catch(invalid_argument& message) {
        cout << "Valor rejeitado!" << endl;
        cout << "Mensagem de erro: " << message.what() << endl;
        state = failure;
    }
    cout << "\n==============================\n\n";
}

void EmailTest::failure_test_block(string value) {
    cout << "Testando valor inválido" << endl;
    try {
        cout << "Horario testado: " << value << endl << endl;
        email->setEmail(value);
        cout << "Valor aceito!" << endl;
        cout << "O valor atual é: " << email->getEmail() << endl;
        state = failure;
    } catch(invalid_argument& message) {
        cout << "Valor rejeitado!" << endl;
        cout << "Mensagem de erro: " << message.what() << endl;
    }
    cout << "\n==============================\n\n";
}
