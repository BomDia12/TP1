#include <string>
using namespace std;

/**
 * @brief Classe do Domínio senha
 * 
 * @author Pedro Venzi -  200042696
 */
class Password {
    private:
        string value;
        void validate(string value);

    public:

        /**
         * @brief Cosntrutor padrão do Domínio senha
         */
        Password();

        /**
         * @brief Construtor que inicializa o objeto com o valor indicado
         * 
         * @param value valor a inicializar o objet em questão
         * @throw invalid_argument caso o valor inserido não seja válido
         */
        Password(string value);

        /**
         * @brief retorna a senha armazenada no objeto
         * 
         * @return string com a senha armazenada nesse objeto
         */
        string getPassword();

        /**
         * @brief atualiza a senha desse objeto
         * 
         * @param value valor da nova senha
         * @throw invalid_argument caso o valor inserido seja inválido
         */
        void setPassword(string value);
};

inline Password::Password(){};

inline string Password::getPassword() {
    return value;
};

inline void Password::setPassword(string value) {
    validate(value);
    this->value = value;
};