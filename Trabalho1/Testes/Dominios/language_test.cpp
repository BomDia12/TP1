#include "language_test.hpp"
#include <string>
#include <iostream>
using namespace std;

void test_block(string language) {
    try {
        cout << "Idioma testado: " << language << endl << endl;
        Language obj = Language(language);
        cout << "Valor aceito!" << endl;
        cout << "O valor atual é: " << obj.getLanguage() << endl; 
    } catch(invalid_argument& message) {
        cout << "Valor inválido!" << endl;
        cout << "Mensagem de erro: " << message.what() << endl;
    }
    cout << "\n==============================\n\n";
};

int main() {
    cout << "Testando com idioma valido" << endl;

    test_block("Chines Mandarim");

    cout << "Testando com idioma valido" << endl;

    test_block("Indonesio");

    cout << "Testando com idioma invalido" << endl;

    test_block("japones");

    cout << "Testando com idioma invalido" << endl;

    test_block("Batata");

    cout << "Testando com idioma invalido" << endl;

    test_block("espanhol");
}