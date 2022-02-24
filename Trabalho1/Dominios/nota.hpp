/**
 * Classe que implementa a nota e checa se o valor é válido
 * 
 * @author Arthur Mota Furtado 200014935
 */
class Nota {
    private:
        unsigned int nota;
        inline static const int limite = 5;
        void validate(unsigned int nota);
    public:
        Nota();

        /**
         * Constroi um novo objeto nota, caso o valor inserido seja válido
         * 
         * @param nota um valor de 0 a 5
         * 
         * @throw invalid_argument com a descrição do erro
         */
        Nota(unsigned int nota);

        /**
         * Muda a nota do objeto, caso o valor seja válido
         * 
         * @param nota um valor de 0 a 5
         * 
         * @throw invalid_argument com a descrição do erro
         */
        void setNota(unsigned int nota);

        /**
         * Retorna o valor atual da nota
         * 
         * @return unsigned int sendo um valor entre 0 e 5
         */
        unsigned int getNota();
};

inline unsigned int Nota::getNota() {
    return nota;
}