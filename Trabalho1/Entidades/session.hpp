#ifndef SESSION
#define SESSION
#include "../Dominios/date.hpp"
#include "../Dominios/codigo.hpp"
#include "../Dominios/time.hpp"
#include "../Dominios/language.hpp"
using namespace std;

/**
 * @brief Classe Session
 * @author Pedro Venzi - 200042696
 * 
 * Entidade Session, que guarda a sessão que um usuário fez de uma escurção
 */
class Session {
    private:
        Codigo codigo;
        Date date;
        Time time;
        Language language;
    public:
        // Constructors
        /**
         * @brief Construtor padrão
         */
        Session();

        // Get Methods
        /**
         * @brief retorna o código da sessão
         * 
         * @return string que tem o código da sessão
         */
        string getCodigo();

        /**
         * @brief retorna a data da sessão
         * 
         * @return string que tem a data da sessão
         */
        string getDate();

        /**
         * @brief retorna o horario da sessão
         * 
         * @return string com o horario da sessão
         */
        string getTime();

        /**
         * @brief retorna o idioma da sessão
         * 
         * @return string com o idioma da sessão
         */
        string getLanguage();

        // Set Methods
        /**
         * @brief configura o código da sessão, caso seja válido
         * @param codigo string com o código a ser aplicado a sessão
         * @throw invalid_argument caso o valor seja inválido
         */
        void setCodigo(string);

        /**
         * @brief configura a data da sessão, caso seja válido
         * 
         * @param date string com a data a ser aplicada
         * @throw invalid_argumet caso o valor seja inválido
         */
        void setDate(string);

        /**
         * @brief configura o horário da sessão, caso seja válido
         * 
         * @param time string com o horário a ser aplicado
         * @throw invalid_argument caso o valor seja inválido
         */
        void setTime(string);

        /**
         * @brief configura o idioma da sessão, caso seja válido
         * 
         * @param language string com o idioma a ser aplicado
         * @throw invalid_argument caso o valor seja inválido
         */
        void setLanguage(string);
};

#endif
