#include "user_test.hpp"
#include <iostream>
using namespace std;

int UserTest::run() {
    set_up();

    failure_email_test_block(".batata@batata");
    sucessful_email_test_block("batata@batata");

    failure_name_test_block("Bom  dia");
    sucessful_name_test_block("Bom Dia");

    failure_password_test_block("12345");
    sucessful_password_test_block("AbaB12");

    tear_down();

    return state;
}

void UserTest::set_up() {
    user = new User();
    state = sucess;
}

void UserTest::tear_down() {
    delete user;
}

void UserTest::sucessful_email_test_block(string email) {
    cout << "Testando Email válido" << endl;
    try {
        cout << "Email Testado: " << email << endl << endl;
        user->setEmail(email);
        cout << "Email aceito!" << endl;
        cout << "O Email atual é: " << user->getEmail() << endl;
    } catch(invalid_argument& message) {
        cout << "Email rejeitado!" << endl;
        cout << "Mensagem de erro: " << message.what() << endl;
        state = failure;
    }
    cout << "\n==============================\n\n";
}

void UserTest::failure_email_test_block(string email) {
    cout << "Testando Email Inválido" << endl;
    try {
        cout << "Email Testado: " << email << endl << endl;
        user->setEmail(email);
        cout << "Email aceito!" << endl;
        cout << "O Email atual é: " << user->getEmail() << endl;
        state = failure;
    } catch(invalid_argument& message) {
        cout << "Email rejeitado!" << endl;
        cout << "Mensagem de erro: " << message.what() << endl;
    }
    cout << "\n==============================\n\n";
}

void UserTest::sucessful_name_test_block(string name) {
    cout << "Testando Nome válido" << endl;
    try {
        cout << "Nome Testado: " << name << endl << endl;
        user->setName(name);
        cout << "Nome aceito!" << endl;
        cout << "O Nome atual é: " << user->getName() << endl;
    } catch(invalid_argument& message) {
        cout << "Nome rejeitado!" << endl;
        cout << "Mensagem de erro: " << message.what() << endl;
        state = failure;
    }
    cout << "\n==============================\n\n";
}

void UserTest::failure_name_test_block(string name) {
    cout << "Testando Nome Inválido" << endl;
    try {
        cout << "Nome Testado: " << name << endl << endl;
        user->setName(name);
        cout << "Nome aceito!" << endl;
        cout << "O Nome atual é: " << user->getName() << endl;
        state = failure;
    } catch(invalid_argument& message) {
        cout << "Nome rejeitado!" << endl;
        cout << "Mensagem de erro: " << message.what() << endl;
    }
    cout << "\n==============================\n\n";
}

void UserTest::sucessful_password_test_block(string password) {
    cout << "Testando senha válida" << endl;
    try {
        cout << "Senha Testada: " << password << endl << endl;
        user->setPassword(password);
        cout << "Senha aceita!" << endl;
        cout << "a Senha atual é: " << user->getPassword() << endl;
    } catch(invalid_argument& message) {
        cout << "Senha rejeitada!" << endl;
        cout << "Mensagem de erro: " << message.what() << endl;
        state = failure;
    }
    cout << "\n==============================\n\n";
}

void UserTest::failure_password_test_block(string password) {
    cout << "Testando senha Inválida" << endl;
    try {
        cout << "Senha Testada: " << password << endl << endl;
        user->setPassword(password);
        cout << "Senha aceita!" << endl;
        cout << "a Senha atual é: " << user->getPassword() << endl;
        state = failure;
    } catch(invalid_argument& message) {
        cout << "Senha rejeitada!" << endl;
        cout << "Mensagem de erro: " << message.what() << endl;
    }
    cout << "\n==============================\n\n";
}