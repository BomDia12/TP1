#include <string>
#include <iostream>
#include "language_test.hpp"
using namespace std;

void LanguageTest::set_up() {
    language = new Language("Indonesio");
    estado = sucess;
}

void LanguageTest::tear_down() {
    delete language;
}

int LanguageTest::run() {
    set_up();
    sucessful_test_block("Chines Mandarim");
    failure_test_block("Batata");
    tear_down();

    return estado;
}

void LanguageTest::sucessful_test_block(string language) {
    cout << "Testando valor válido" << endl;
    try {
        cout << "Horario testado: " << language << endl << endl;
        this->language->setLanguage(language);
        cout << "Valor aceito!" << endl;
        cout << "O valor atual é: " << this->language->getLanguage() << endl;
    } catch(invalid_argument& message) {
        cout << "Valor rejeitado!" << endl;
        cout << "Mensagem de erro: " << message.what() << endl;
        estado = failure;
    }
    cout << "\n==============================\n\n";
}

void LanguageTest::failure_test_block(string language) {
    cout << "Testando valor inválido" << endl;
    try {
        cout << "Horario testado: " << language << endl << endl;
        this->language->setLanguage(language);
        cout << "Valor aceito!" << endl;
        cout << "O valor atual é: " << this->language->getLanguage() << endl;
        estado = failure;
    } catch(invalid_argument& message) {
        cout << "Valor rejeitado!" << endl;
        cout << "Mensagem de erro: " << message.what() << endl;
    }
    cout << "\n==============================\n\n";
}
