#ifndef USER
#define USER
#include "../Dominios/name.hpp"
#include "../Dominios/email.hpp"
#include "../Dominios/password.hpp"

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
         * @brief atualiza o valor do nome do usuário
         * 
         * @param name o novo nome a ser atualizado
         * @throw invalid_argument caso o valor não seja válido
         */
        void set_name(string);

        /**
         * @brief retorna o nome do usuário
         * 
         * @return string com o nome do usuário
         */
        string get_name();

        /**
         * @brief atualiza o valor do email
         * 
         * @param email o novo email do usuário
         * @throw invalid_argument caso o valor seja inválido
         */
        void set_email(string);
};

#endif