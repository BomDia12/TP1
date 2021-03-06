#include <iostream>
#include <string>
#include "time.hpp"

using namespace std;


Time::Time (string time) {
    validate(time);
    this->time = time;
}

void Time::setTime (string time) {
    validate(time);
    this->time = time;
}

void Time::validate (string time) {

    if ((time.length() != 5) || (time[2] != ':'))
        throw invalid_argument("Horário deve ser no formato HH:MM");
    
    else { 
        int hour = stoi(time.substr(0, 2));
        int minutes = stoi(time.substr(3, 2));

        if (hour < 0 || hour > 23)
            throw invalid_argument("Horas devem estar entre 00 e 23");
        
        if (minutes < 0 || minutes > 59)
            throw invalid_argument("minutos devem estar entre 00 e 59");
    }

}