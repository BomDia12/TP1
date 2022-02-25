#include <string>
#include <iostream>
using namespace std;

/**
 * @brief Classe do domínio Idioma
 * 
 * @author Gabriel Cruz - 200049038
 */
class Language {
    private:
        string language;
        void validate(string language);
        inline static const string valid_languages[10] = {
            "Ingles", "Chines Mandarim", "Hindi", "Espanhol", 
            "Frances", "Arabe", "Bengali", "Russo", "Portugues",
            "Indonesio"
        };
    public:

        /**
         * @brief Construtor padrão do domínio idioma
         */
        Language();

        /**
         * @brief Construtor que iniciliza o objeto com o valor indicado
         * 
         * @param language valor a ser inicializado no objeto
         * @throw invalid_argumnt caso o valor inserido não seja válido
         */
        Language(string language);

        /**
         * @brief retorna o valor armazenado no objeto em questão
         * 
         * @return string com o idioma armazenado no objeto em questão
         */
        string getLanguage();

        /**
         * @brief insere um valor no objeto em questão
         * 
         * @param language com a valor a ser inserido no objeto em questão
         * @throw invalid_argument caso o valor inserido seja inválido
         */
        void setLanguage(string language);
};

inline string Language::getLanguage() {
    return language;
}

inline Language::Language() {};