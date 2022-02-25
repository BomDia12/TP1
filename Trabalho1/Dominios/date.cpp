#include <string>
#include <iostream>
#include "date.hpp"
#include <regex>
using namespace std;

string Date::getDate() {
    string day_string = to_string(day);
    string year_string = to_string(year);

    if (day_string.length() == 2)
        return day_string + "-" + month + "-" + year_string;
    
    return "0" + day_string + "-" + month + "-" + year_string;
}

unsigned int Date::getDay(string date) {
    string day_string = date.substr(0, 2);
    
    return stoi(day_string);
}

unsigned int Date::getYear(string date) {
    string yaer_string = date.substr(7, 4);

    return stoi(yaer_string);
}

Date::Date(unsigned int day, string month, unsigned int year) {
    validate(day, month, year);

    this->day = day;
    this->month = month;
    this->year = year;
}

void Date::setDate(unsigned int day, string month, unsigned int year) {
    validate(day, month, year);

    this->day = day;
    this->month = month;
    this->year = year;
}

Date::Date(string date) {
    day = getDay(date);
    month = date.substr(3, 3);
    year = getYear(date);

    validate(day, month, year);

    this->day = day;
    this->month = month;
    this->year = year;
}

void Date::setDate(string date) {
    day = getDay(date);
    month = date.substr(3, 3);
    year = getYear(date);

    validate(day, month, year);

    this->day = day;
    this->month = month;
    this->year = year;
}

void Date::validate(unsigned int day, string month, unsigned int year) {

    if (day < 1 || day > 31)
        throw invalid_argument("O dia tem que ser ente 1 e 31");

    if (year < 2000 || year > 9999)
        throw invalid_argument("O ano tem que ser entre 2000 e 9999");
    
    bool bissexto = false;

    if (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0))
        bissexto = true;

    bool valid_month = false;
 
    for (int i = 0; i < 12; i++) {
        if (month == valid_months[i]) {
            valid_month = true;
            break;
        }
    }

    if (!valid_month)
        throw invalid_argument("O mês inserido não é válido");

    bool long_month = false;

    for (int i = 0; i < 7; i++) {
        if (month == long_months[i]) {
            long_month = true;
            break;
        }
    }

    if (!long_month && day == 31)
        throw invalid_argument("Esse mês não tem 31 dias");
    
    if (month == "Fev") {
        if (day == 30)
            throw invalid_argument("Fevereiro não tem 30 dias");
        
        if (!bissexto && day == 29)
            throw invalid_argument("Esse ano não é bissexto");
    }
}
