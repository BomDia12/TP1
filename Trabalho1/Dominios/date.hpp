#include <string>
using namespace std;

/**
 * Classe para armazenar o valor das datas e conferir se elas estão válidas
 * 
 * @author Arthur Mota Furtado - 200014935
 */
class Date {
    private:
        unsigned int day;
        string month;
        unsigned int year;
        void validate(unsigned int day, string month, unsigned int year);
        unsigned int getDay(string date);
        string getMonth(string date);
        unsigned int getYear(string date);
        inline static const string valid_months[12] = {
            "Jan", "Fev", "Mar", "Abr", "Mai", "Jun", "Jul", "Ago", "Set", "Out", "Nov", "Dez"
        };
        inline static const string long_months[7] = {
            "Jan", "Mar", "Mai", "Jul", "Ago", "Out", "Dez"
        };
    public:

        /**
         * Inicializa uma data caso os parametros sejam válidos. Considera anos bissextos
         * 
         * @param day   Dia da data a ser inicializada, como inteiro. O dia deve ser válido com base no mês inserido
         * @param month String que contem o mês da data a ser inicializada. Deve ser as 3 primeiras letras do mês com a primeira letra capitalizada
         * @param year  Inteiro que indica o ano da data a ser inicializada. Deve estar entre 2000 e 9999
         * 
         * @throw invalid_argument com a descrição do erro que aconteceu
         */
        Date(unsigned int day, string month, unsigned int year);

        /**
         * Inicializa uma data caso os parametros sejam válidos. Considera anos bissextos
         * 
         * @param date Data no formato DD-Mes-AAAA. Checa se essa data existe no calendário gregoriano
         * 
         * @throw invalid_argument com a descrição do erro que aconteceu
         */
        Date(string date);

        /**
         * Retorna a data da instância
         * 
         * @return string data no formato DD-Mes-AAAA
         * 
         * @throw invalid_argument com a descrição do erro que aconteceu
         */
        string getDate();

        /**
         * Atualiza o valor da data, caso seja uma data válida
         * 
         * @param day   Dia da data a ser inicializada, como inteiro. O dia deve ser válido com base no mês inserido
         * @param month String que contem o mês da data a ser inicializada. Deve ser as 3 primeiras letras do mês com a primeira letra capitalizada
         * @param year  Inteiro que indica o ano da data a ser inicializada. Deve estar entre 2000 e 9999
         * 
         * @throw invalid_argument com a descrição do erro que aconteceu
         */
        void setDate(unsigned int day, string month, unsigned int year);

        /**
         * Atualiza o valor da data, caso seja uma data válida
         * 
         * @param date Data no formato DD-Mes-AAAA. Checa se essa data existe no calendário gregoriano
         * 
         * @throw invalid_argument com a descrição do erro que aconteceu
         */
        void setDate(string date);
};
