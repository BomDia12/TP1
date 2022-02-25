#include <string>
#include <iostream>
using namespace std;

/**
 * @brief Classe do domínio tempo
 * 
 * @author Gabriel Cruz - 200049038
 */
class Time {
    private:
        string time;
        void validate(string time);
    public:

        /**
         * @brief Construtor padrão do domínio tempo
         */
        Time();

        /**
         * @brief Construtor que inicializa o objeto com o valor inserido
         * 
         * @param time valor a inicializar o objeto
         * @throw invalid_argumetn caso o valor inserido não seja válido
         */
        Time(string time);

        /**
         * @brief retorna o valor armazendo no objeto
         * 
         * @return string com o valor do tempo no formarto HH:MM
         */
        string getTime();

        /**
         * @brief atualiza o valor do objeto em questão
         * 
         * @param time novo valor a ser inserido no objeto
         * @throw invalid_argument caso o valor inserido seja inválido
         */
        void setTime(string time);

};

inline string Time::getTime() {
    return time;
}

inline Time::Time(){};
