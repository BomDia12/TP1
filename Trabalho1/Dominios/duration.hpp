#ifndef DURATION
#define DURATION
#include <string>
using namespace std;

/**
 * @brief Classe do domínio duração
 * 
 * @author Pedro Venzi -  200042696
 */
class Duration {
    private:
        int value;
        void validate(int value);
        inline static const int valid_durations[5] = {
          30,60,90,120,180
        };

    public:

        /**
         * @brief Construtor padrão do domínio duração
         */
        Duration();

        /**
         * @brief Construtor que inicializa o objeto com um valor
         * 
         * @param value valor a inicializar o objeto
         * @throw invalid_arugment caso o valor inserido não seja válido
         */
        Duration(int value);

        /**
         * @brief Retorna o valor da 
         * 
         * @return int com o valor guardado no objeto em questão
         */
        int getDuration();

        /**
         * @brief insere um novo valor no objeto em questão
         * 
         * @param value valor a ser inserido como duração
         * @throw invalid_argument caso o valor inserido não seja válido
         */
        void setDuration(int value);
};

inline int Duration::getDuration() {
    return value;
};

inline void Duration::setDuration(int value) {
    validate(value);
    this->value = value;
};

inline Duration::Duration() {};

#endif