#include "excurcao.hpp"

void Excurcao::setTime(string time) {
    this->time.setTime(time);
}

void Excurcao::setCity(string city) {
    this->city.setName(city);
}

void Excurcao::setTitle(string title) {
    this->title.setTitle(title);
}

void Excurcao::setCodigo(string codigo) {
    this->codigo.setCodigo(codigo);
}

void Excurcao::setAddress(string address) {
    this->address.setAddress(address);
}

void Excurcao::setNota(unsigned int nota) {
    this->nota.setNota(nota);
}

void Excurcao::setDuration(unsigned int duration) {
    this->duration.setDuration(duration);
}

void Excurcao::setDescription(string description) {
    this->description.setDescription(description);
}
