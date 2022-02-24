#include "main.hpp"

int main() {
    TimeTest time = TimeTest();
    if (time.run())
        return 1;
    
    NotaTest nota = NotaTest();
    if (nota.run())
        return 1;

    NameTest name = NameTest();
    if (name.run())
        return 1;

    DateTest date = DateTest();
    if (date.run())
        return 1;
    
    LanguageTest language = LanguageTest();
    if (language.run())
        return 1;
    
    DurationTest duration = DurationTest();
    if (duration.run())
        return 1;
    
    DescriptionTest description = DescriptionTest();
    if (description.run())
        return 1;
}
