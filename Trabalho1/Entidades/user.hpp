#ifndef USER
#define USER
#include "../Dominios/name.hpp"
#include "../Dominios/email.hpp"
#include "../Dominios/password.hpp"

/**
 * 
 * @brief Classe User
 * @author Gabriel Cruz - 200049038
 * 
 * Entidade User, que guarda o User
 */

class User {
    private:
        Name name;
        Email email;
        Password password;
    public:
        /**
         * @brief Construtor padrão
         */
        User();

        /**
         * @brief construtor que recebe apenas o email
         * @param email configura o email do usuario, caso seja válido
         * @throw invalid argument quando o email inserido for invalido
         */ 
        User(Email);

        /**
         * @brief construtor que recebe o email e a senha
         * @param email configura o email do usuário, caso seja válido
         * @param name configura o nome do usuário, caso seja válido
         * @throw invalid_argument quando algum valor for invalido
         */
        User(Email, Name);

                /**
         * @brief construtor que recebe o email e a senha
         * @param email configura o email do usuário, caso seja válido
         * @param name configura o nome do usuário, caso seja válido
         * @param password configura a senha do usuário, caso seja válido
         * @throw invalid_argument quando algum valor for invalido
         */
        User(Email, Name, Password);

        /**
         * @brief atualiza o valor do nome do usuário
         * 
         * @param name o novo nome a ser atualizado
         * @throw invalid_argument caso o valor não seja válido
         */
        void setName(string);

        /**
         * @brief retorna o nome do usuário
         * 
         * @return string com o nome do usuário
         */
        string getName();

        /**
         * @brief atualiza o valor do email
         * 
         * @param email o novo email do usuário
         * @throw invalid_argument caso o valor seja inválido
         */
        void setEmail(string);

        /**
         * @brief retorna o email do usuário
         * 
         * @return string com o email do usuário
         */ 
        string getEmail();

        /**
         * @brief atualiza o valor da senha
         * @param password a nova senha do usuário
         * @throw invalid_argument caso o valor seja inválido
         */ 
        void setPassword(string);

        /**
         * @brief retorna a senha do usuário
         * 
         * @return string com a senha do usuário
         */ 
        string getPassword();
};

#endif