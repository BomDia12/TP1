#ifndef REVIEW
#define REVIEW
#include "../Dominios/nota.hpp"
#include "../Dominios/codigo.hpp"
#include "../Dominios/description.hpp"
using namespace std;

/**
 * @brief Classe Review
 * @author Arthur Mota Furtado - 200014935
 * 
 * Entidade Review, que guarda a avaliação que um usuário fez de uma escurção
 */
class Review {
    private:
        Nota nota;
        Codigo codigo;
        Description description;
    public:
        // Constructors
        /**
         * @brief Construtor padrão
         */
        Review();

        /**
         * @brief Construtor que recebe o Codigo
         * @param codigo configura o valor do código da avalição, caso seja válido
         * @throw invalid_argument quando algum valor for inválido
         */
        Review(Codigo);

        /**
         * @brief Construtor que recebe o Codigo
         * @param codigo configura o valor do código da avalição, caso seja válido
         * @param nota   configura o valor da nota, caso seja válido
         * @throw invalid_argument quando algum valor for inválido
         */
        Review(Codigo, Nota);

        /**
         * @brief Construtor que recebe o Codigo
         * @param codigo configura o valor do código da avalição, caso seja válido
         * @param descrição configura a descrição da avaliação, caso seja válido
         * @param nota   configura o valor da nota, caso seja válido
         * @throw invalid_argument quando algum valor for inválido
         */
        Review(Codigo, Nota, Description);

        // Get Methods
        /**
         * @brief retorna o código da avaliação
         * 
         * @return string que tem o código da avaliação
         */
        string getCodigo();

        /**
         * @brief retorna a nota da avaliação
         * 
         * @return unsigned int que tem a nota da avaliação
         */
        unsigned int getNota();

        /**
         * @brief retorna a descrição da avaliação
         * 
         * @return string com a descrição da avaliação
         */
        string getDescription();

        // Set Methods
        /**
         * @brief configura o código da avaliação, caso seja válido
         * @param codigo string com a descrição a ser aplicada a avaliação
         * @throw invalid_argument caso o valor seja inválido
         */
        void setCodigo(string);

        /**
         * @brief configura a nota da avaliação, caso seja válido
         * 
         * @param nota int com a nota a ser aplicada
         * @throw invalid_argumet caso o valor seja inválido
         */
        void setNota(unsigned int);

        /**
         * @brief configura a descrição da avaliação, caso seja válido
         * 
         * @param description string com a descrição a ser aplicada
         * @throw invalid_argument caso o valor seja inválido
         */
        void setDescription(string);
};

#endif
