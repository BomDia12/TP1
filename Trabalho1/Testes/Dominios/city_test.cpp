#include <string>
#include <iostream>
#include "city_test.hpp"
using namespace std;

int CityTest::run() {
    set_up();
    sucessful_test_block("Bangkok");
    failure_test_block("Bom dia");
    tear_down();

    return 0;
}

void CityTest::set_up() {
    city = new City("Bangkok");
    estado = sucess;
}

void CityTest::tear_down() {
    delete city;
}

void CityTest::sucessful_test_block(string city) {
    cout << "Testando valor válido" << endl;
    try {
        cout << "Horario testado: " << city << endl << endl;
        this->city->setName(city);
        cout << "Valor aceito!" << endl;
        cout << "O valor atual é: " << this->city->getName() << endl;
    } catch(invalid_argument& message) {
        cout << "Valor rejeitado!" << endl;
        cout << "Mensagem de erro: " << message.what() << endl;
        estado = failure;
    }
    cout << "\n==============================\n\n";
}

void CityTest::failure_test_block(string city) {
    cout << "Testando valor inválido" << endl;
    try {
        cout << "Horario testado: " << city << endl << endl;
        this->city->setName(city);
        cout << "Valor aceito!" << endl;
        cout << "O valor atual é: " << this->city->getName() << endl;
        estado = failure;
    } catch(invalid_argument& message) {
        cout << "Valor rejeitado!" << endl;
        cout << "Mensagem de erro: " << message.what() << endl;
    }
    cout << "\n==============================\n\n";
}
