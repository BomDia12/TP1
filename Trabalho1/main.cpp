#include "main.hpp"

int main() {
    TimeTest time = TimeTest();
    if (time.run() == 1)
        return 1;
    
    NotaTest nota = NotaTest();
    if (nota.run() == 1)
        return 1;

    NameTest name = NameTest();
    if (name.run() == 1)
        return 1;

    DateTest date = DateTest();
    if (date.run() == 1)
        return 1;
    
    CityTest city = CityTest();
    if (city.run() == 1)
        return 1;

    TitleTest title = TitleTest();
    if (title.run() == 1)
        return 1;
    
    EmailTest email = EmailTest();
    if (email.run() == 1)
        return 1;

    CodigoTest codigo = CodigoTest();
    if (codigo.run() == 1)
        return 1;
    
    AddressTest address = AddressTest();
    if (address.run() == 1)
        return 1;
    
    LanguageTest language = LanguageTest();
    if (language.run() == 1)
        return 1;

    PasswordTest password = PasswordTest();
    if (password.run() == 1)
        return 1;
    
    DurationTest duration = DurationTest();
    if (duration.run() == 1)
        return 1;
    
    DescriptionTest description = DescriptionTest();
    if (description.run() == 1)
        return 1;
    
    ReviewTest review = ReviewTest();
    if (review.run() == 1)
        return 1;
    
    ExcurcaoTest excurcao = ExcurcaoTest();
    if (excurcao.run() == 1)
        return 1;

    SessionTest session = SessionTest();
    if (session.run() == 1)
        return 1;

    UserTest user = UserTest();
    if (user.run() == 1)
        return 1;

    return 0;
}

