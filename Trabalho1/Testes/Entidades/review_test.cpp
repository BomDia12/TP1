#include "review_test.hpp"
#include <iostream>
using namespace std;

int ReviewTest::run() {
    set_up();
    failure_code_test_block("0000000");
    sucessful_code_test_block("0001236");
    failure_grade_test_block(6);
    sucessful_grade_test_block(1);
    failure_description_test_block("Civilizações  castrejas");
    sucessful_description_test_block("Civilizações castrejas");
    tear_down();

    return state;
}

void ReviewTest::set_up() {
    review = new Review();
    state = sucess;
}

void ReviewTest::tear_down() {
    delete review;
}

void ReviewTest::sucessful_description_test_block(string value) {
    cout << "Testando valor válido" << endl;
    try {
        cout << "Horario testado: " << value << endl << endl;
        review->setDescription(value);
        cout << "Valor aceito!" << endl;
        cout << "O valor atual é: " << review->getDescription() << endl;
    } catch(invalid_argument& message) {
        cout << "Valor rejeitado!" << endl;
        cout << "Mensagem de erro: " << message.what() << endl;
        state = failure;
    }
    cout << "\n==============================\n\n";
}

void ReviewTest::failure_description_test_block(string value) {
    cout << "Testando valor inválido" << endl;
    try {
        cout << "Horario testado: " << value << endl << endl;
        review->setDescription(value);
        cout << "Valor aceito!" << endl;
        cout << "O valor atual é: " << review->getDescription() << endl;
        state = failure;
    } catch(invalid_argument& message) {
        cout << "Valor rejeitado!" << endl;
        cout << "Mensagem de erro: " << message.what() << endl;
    }
    cout << "\n==============================\n\n";
}

void ReviewTest::sucessful_code_test_block(string value) {
    cout << "Testando valor válido" << endl;
    try {
        cout << "Horario testado: " << value << endl << endl;
        review->setCodigo(value);
        cout << "Valor aceito!" << endl;
        cout << "O valor atual é: " << review->getCodigo() << endl;
    } catch(invalid_argument& message) {
        cout << "Valor rejeitado!" << endl;
        cout << "Mensagem de erro: " << message.what() << endl;
        state = failure;
    }
    cout << "\n==============================\n\n";
}

void ReviewTest::failure_code_test_block(string value) {
    cout << "Testando valor inválido" << endl;
    try {
        cout << "Horario testado: " << value << endl << endl;
        review->setCodigo(value);
        cout << "Valor aceito!" << endl;
        cout << "O valor atual é: " << review->getCodigo() << endl;
        state = failure;
    } catch(invalid_argument& message) {
        cout << "Valor rejeitado!" << endl;
        cout << "Mensagem de erro: " << message.what() << endl;
    }
    cout << "\n==============================\n\n";
}

void ReviewTest::sucessful_grade_test_block(unsigned int value) {
    cout << "Testando valor válido" << endl;
    try {
        cout << "Horario testado: " << value << endl << endl;
        review->setNota(value);
        cout << "Valor aceito!" << endl;
        cout << "O valor atual é: " << review->getNota() << endl;
    } catch(invalid_argument& message) {
        cout << "Valor rejeitado!" << endl;
        cout << "Mensagem de erro: " << message.what() << endl;
        state = failure;
    }
    cout << "\n==============================\n\n";
}

void ReviewTest::failure_grade_test_block(unsigned int value) {
    cout << "Testando valor inválido" << endl;
    try {
        cout << "Horario testado: " << value << endl << endl;
        review->setNota(value);
        cout << "Valor aceito!" << endl;
        cout << "O valor atual é: " << review->getNota() << endl;
        state = failure;
    } catch(invalid_argument& message) {
        cout << "Valor rejeitado!" << endl;
        cout << "Mensagem de erro: " << message.what() << endl;
    }
    cout << "\n==============================\n\n";
}

// int main() {
//     ReviewTest test = ReviewTest();
//     return test.run();
// }
