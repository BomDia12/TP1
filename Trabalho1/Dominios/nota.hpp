class Nota {
    private:
        unsigned int nota;
        inline static const int limite = 5;
        void validate(unsigned int nota);
    public:
        Nota(unsigned int nota);
        void setNota(unsigned int nota);
        unsigned int getNota();
};

inline unsigned int Nota::getNota() {
    return nota;
}