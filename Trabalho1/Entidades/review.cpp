#include "review.hpp"
using namespace std;

Review::Review() {}

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

string Review::getCodigo() {
    return codigo.getCodigo();
}

unsigned int Review::getNota() {
    return nota.getNota();
}

string Review::getDescription() {
    return description.getDescription();
}

void Review::setCodigo(string codigo) {
    this->codigo.setCodigo(codigo);
}

void Review::setNota(unsigned int nota) {
    this->nota.setNota(nota);
}

void Review::setDescription(string description) {
    this->description.setDescription(description);
}
