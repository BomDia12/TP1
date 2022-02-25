#include "session.hpp"
using namespace std;

Session::Session() {}

string Session::getCodigo() {
    return codigo.getCodigo();
}

string Session::getDate() {
    return date.getDate();
}

string Session::getTime() {
    return time.getTime();
}

string Session::getLanguage() {
    return language.getLanguage();
}

void Session::setCodigo(string codigo) {
    this->codigo.setCodigo(codigo);
}

void Session::setTime(string time) {
    this->time.setTime(time);
}

void Session::setDate(string date) {
    this->date.setDate(date);
}

void Session::setLanguage(string language) {
    this->language.setLanguage(language);
}
