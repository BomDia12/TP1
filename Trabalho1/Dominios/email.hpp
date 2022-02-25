#include <string>
#include <iostream>

/**
 * Classe que implementa o nome e confere se o valor válido
 * 
 * @author Gabriel Cruz Vaz Santos - 200049038
 */
using namespace std;
class Email {
    private:
        string email;
        void validate(string email);
    public:
        /**
         * Cria um novo email caso o valor passado seja valido 
         * 
         * @param email nome a ser inserido na classe inicializada caso seja um email válido
         * 
         * @throw invalid_argument com a descrição do erro
         */
        Email(string email);

        /**
         * Troca o email pelo email inserido, caso ele seja válido
         * 
         * @param email email a ser inserido na função, caso ele seja válido
         * 
         * @throw invalid_argument com a descrição do erro
         */ 
        void setEmail(string email);

        /**
         * Retorna o email armazenado no objeto
         * 
         * @return string com o email do objeto
         */
        string getEmail();
};

inline string Email::getEmail() {
    return email;
}