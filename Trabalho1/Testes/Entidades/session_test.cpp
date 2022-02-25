#include "session_test.hpp"
#include <iostream>
using namespace std;

int SessionTest::run() {
    set_up();

    failure_code_test_block("0000000");
    sucessful_code_test_block("0001236");

    failure_time_test_block("24:00");
    sucessful_time_test_block("23:59");

    failure_date_test_block("18-Oct-1999");
    sucessful_date_test_block("18-Out-2001");

    failure_language_test_block("Castrejo");
    sucessful_language_test_block("Hindi");
    tear_down();

    return state;
}

void SessionTest::set_up() {
    session = new Session();
    state = sucess;
}

void SessionTest::tear_down() {
    delete session;
}

void SessionTest::sucessful_time_test_block(string value) {
    cout << "Testando valor válido" << endl;
    try {
        cout << "Horario testado: " << value << endl << endl;
        session->setTime(value);
        cout << "Valor aceito!" << endl;
        cout << "O valor atual é: " << session->getTime() << endl;
    } catch(invalid_argument& message) {
        cout << "Valor rejeitado!" << endl;
        cout << "Mensagem de erro: " << message.what() << endl;
        state = failure;
    }
    cout << "\n==============================\n\n";
}

void SessionTest::failure_time_test_block(string value) {
    cout << "Testando valor inválido" << endl;
    try {
        cout << "Horario testado: " << value << endl << endl;
        session->setTime(value);
        cout << "Valor aceito!" << endl;
        cout << "O valor atual é: " << session->getTime() << endl;
        state = failure;
    } catch(invalid_argument& message) {
        cout << "Valor rejeitado!" << endl;
        cout << "Mensagem de erro: " << message.what() << endl;
    }
    cout << "\n==============================\n\n";
}

void SessionTest::sucessful_code_test_block(string value) {
    cout << "Testando valor válido" << endl;
    try {
        cout << "Codigo testado: " << value << endl << endl;
        session->setCodigo(value);
        cout << "Valor aceito!" << endl;
        cout << "O valor atual é: " << session->getCodigo() << endl;
    } catch(invalid_argument& message) {
        cout << "Valor rejeitado!" << endl;
        cout << "Mensagem de erro: " << message.what() << endl;
        state = failure;
    }
    cout << "\n==============================\n\n";
}

void SessionTest::failure_code_test_block(string value) {
    cout << "Testando valor inválido" << endl;
    try {
        cout << "Codigo testado: " << value << endl << endl;
        session->setCodigo(value);
        cout << "Valor aceito!" << endl;
        cout << "O valor atual é: " << session->getCodigo() << endl;
        state = failure;
    } catch(invalid_argument& message) {
        cout << "Valor rejeitado!" << endl;
        cout << "Mensagem de erro: " << message.what() << endl;
    }
    cout << "\n==============================\n\n";
}

void SessionTest::sucessful_date_test_block(string value) {
    cout << "Testando valor válido" << endl;
    try {
        cout << "Data testada: " << value << endl << endl;
        session->setDate(value);
        cout << "Valor aceito!" << endl;
        cout << "O valor atual é: " << session->getDate() << endl;
    } catch(invalid_argument& message) {
        cout << "Valor rejeitado!" << endl;
        cout << "Mensagem de erro: " << message.what() << endl;
        state = failure;
    }
    cout << "\n==============================\n\n";
}

void SessionTest::failure_date_test_block(string value) {
    cout << "Testando valor inválido" << endl;
    try {
        cout << "Data testada: " << value << endl << endl;
        session->setDate(value);
        cout << "Valor aceito!" << endl;
        cout << "O valor atual é: " << session->getDate() << endl;
        state = failure;
    } catch(invalid_argument& message) {
        cout << "Valor rejeitado!" << endl;
        cout << "Mensagem de erro: " << message.what() << endl;
    }
    cout << "\n==============================\n\n";
}

void SessionTest::sucessful_language_test_block(string value) {
    cout << "Testando valor válido" << endl;
    try {
        cout << "Idioma testado: " << value << endl << endl;
        session->setLanguage(value);
        cout << "Valor aceito!" << endl;
        cout << "O valor atual é: " << session->getLanguage() << endl;
    } catch(invalid_argument& message) {
        cout << "Valor rejeitado!" << endl;
        cout << "Mensagem de erro: " << message.what() << endl;
        state = failure;
    }
    cout << "\n==============================\n\n";
}

void SessionTest::failure_language_test_block(string value) {
    cout << "Testando valor inválido" << endl;
    try {
        cout << "Idioma testado: " << value << endl << endl;
        session->setLanguage(value);
        cout << "Valor aceito!" << endl;
        cout << "O valor atual é: " << session->getLanguage() << endl;
        state = failure;
    } catch(invalid_argument& message) {
        cout << "Valor rejeitado!" << endl;
        cout << "Mensagem de erro: " << message.what() << endl;
    }
    cout << "\n==============================\n\n";
}

// int main() {
//     SessionTest test = SessionTest();
//     return test.run();
// }
