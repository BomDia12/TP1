#include "review.hpp"
using namespace std;

Review::Review(Codigo codigo) {
    this->codigo = codigo;
}

Review::Review(Codigo codigo, Nota nota) {
    this->codigo = codigo;
    this->nota = nota;
}

Review::Review(Codigo codigo, Nota nota, Description description) {
    this->description = description;
    this->codigo = codigo;
    this->nota = nota;
}
