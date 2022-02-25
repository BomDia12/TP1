#include "excurcao_test.hpp"

void ExcurcaoTest::set_up() {
    obj = new Excurcao();
    state = sucess;
}

void ExcurcaoTest::tear_down() {
    delete obj;
}

int ExcurcaoTest::run() {
    set_up();

    sucess_time_test("23:59");
    failure_time_test("2359");

    sucess_city_test("Paris");
    failure_city_test("bom dia");

    sucess_title_test("Titulo Valido");
    failure_title_test("Nop");

    sucess_codigo_test("1234561");
    failure_codigo_test("0");

    sucess_address_test("");
    failure_address_test("  ");

    sucess_nota_test(1);
    failure_nota_test(6);

    sucess_description_test("");
    failure_description_test("..");

    tear_down();

    return state;
}

void ExcurcaoTest::sucess_time_test(string value) {
    cout << "Testando valor válido" << endl;
    try {
        cout << "Horario testado: " << value << endl << endl;
        obj->setTime(value);
        cout << "Valor aceito!" << endl;
        cout << "O valor atual é: " << obj->getTime() << endl;
    } catch(invalid_argument& message) {
        cout << "Valor rejeitado!" << endl;
        cout << "Mensagem de erro: " << message.what() << endl;
        state = failure;
    }
    cout << "\n==============================\n\n";
}

void ExcurcaoTest::failure_time_test(string value) {
    cout << "Testando valor inválido" << endl;
    try {
        cout << "Horario testado: " << value << endl << endl;
        obj->setTime(value);
        cout << "Valor aceito!" << endl;
        cout << "O valor atual é: " << obj->getTime() << endl;
        state = failure;
    } catch(invalid_argument& message) {
        cout << "Valor rejeitado!" << endl;
        cout << "Mensagem de erro: " << message.what() << endl;
    }
    cout << "\n==============================\n\n";
}

void ExcurcaoTest::sucess_city_test(string value) {
    cout << "Testando valor válido" << endl;
    try {
        cout << "Horario testado: " << value << endl << endl;
        obj->setCity(value);
        cout << "Valor aceito!" << endl;
        cout << "O valor atual é: " << obj->getCity() << endl;
    } catch(invalid_argument& message) {
        cout << "Valor rejeitado!" << endl;
        cout << "Mensagem de erro: " << message.what() << endl;
        state = failure;
    }
    cout << "\n==============================\n\n";
}

void ExcurcaoTest::failure_city_test(string value) {
    cout << "Testando valor inválido" << endl;
    try {
        cout << "Horario testado: " << value << endl << endl;
        obj->setCity(value);
        cout << "Valor aceito!" << endl;
        cout << "O valor atual é: " << obj->getCity() << endl;
        state = failure;
    } catch(invalid_argument& message) {
        cout << "Valor rejeitado!" << endl;
        cout << "Mensagem de erro: " << message.what() << endl;
    }
    cout << "\n==============================\n\n";
}


void ExcurcaoTest::sucess_title_test(string value) {
    cout << "Testando valor válido" << endl;
    try {
        cout << "Horario testado: " << value << endl << endl;
        obj->setTitle(value);
        cout << "Valor aceito!" << endl;
        cout << "O valor atual é: " << obj->getTitle() << endl;
    } catch(invalid_argument& message) {
        cout << "Valor rejeitado!" << endl;
        cout << "Mensagem de erro: " << message.what() << endl;
        state = failure;
    }
    cout << "\n==============================\n\n";
}

void ExcurcaoTest::failure_title_test(string value) {
    cout << "Testando valor inválido" << endl;
    try {
        cout << "Horario testado: " << value << endl << endl;
        obj->setTitle(value);
        cout << "Valor aceito!" << endl;
        cout << "O valor atual é: " << obj->getTitle() << endl;
        state = failure;
    } catch(invalid_argument& message) {
        cout << "Valor rejeitado!" << endl;
        cout << "Mensagem de erro: " << message.what() << endl;
    }
    cout << "\n==============================\n\n";
}

void ExcurcaoTest::sucess_codigo_test(string value) {
    cout << "Testando valor válido" << endl;
    try {
        cout << "Horario testado: " << value << endl << endl;
        obj->setCodigo(value);
        cout << "Valor aceito!" << endl;
        cout << "O valor atual é: " << obj->getCodigo() << endl;
    } catch(invalid_argument& message) {
        cout << "Valor rejeitado!" << endl;
        cout << "Mensagem de erro: " << message.what() << endl;
        state = failure;
    }
    cout << "\n==============================\n\n";
}

void ExcurcaoTest::failure_codigo_test(string value) {
    cout << "Testando valor inválido" << endl;
    try {
        cout << "Horario testado: " << value << endl << endl;
        obj->setCodigo(value);
        cout << "Valor aceito!" << endl;
        cout << "O valor atual é: " << obj->getCodigo() << endl;
        state = failure;
    } catch(invalid_argument& message) {
        cout << "Valor rejeitado!" << endl;
        cout << "Mensagem de erro: " << message.what() << endl;
    }
    cout << "\n==============================\n\n";
}

void ExcurcaoTest::sucess_address_test(string value) {
    cout << "Testando valor válido" << endl;
    try {
        cout << "Horario testado: " << value << endl << endl;
        obj->setAddress(value);
        cout << "Valor aceito!" << endl;
        cout << "O valor atual é: " << obj->getAddress() << endl;
    } catch(invalid_argument& message) {
        cout << "Valor rejeitado!" << endl;
        cout << "Mensagem de erro: " << message.what() << endl;
        state = failure;
    }
    cout << "\n==============================\n\n";
}

void ExcurcaoTest::failure_address_test(string value) {
    cout << "Testando valor inválido" << endl;
    try {
        cout << "Horario testado: " << value << endl << endl;
        obj->setAddress(value);
        cout << "Valor aceito!" << endl;
        cout << "O valor atual é: " << obj->getAddress() << endl;
        state = failure;
    } catch(invalid_argument& message) {
        cout << "Valor rejeitado!" << endl;
        cout << "Mensagem de erro: " << message.what() << endl;
    }
    cout << "\n==============================\n\n";
}

void ExcurcaoTest::sucess_description_test(string value) {
    cout << "Testando valor válido" << endl;
    try {
        cout << "Horario testado: " << value << endl << endl;
        obj->setDescription(value);
        cout << "Valor aceito!" << endl;
        cout << "O valor atual é: " << obj->getDescription() << endl;
    } catch(invalid_argument& message) {
        cout << "Valor rejeitado!" << endl;
        cout << "Mensagem de erro: " << message.what() << endl;
        state = failure;
    }
    cout << "\n==============================\n\n";
}

void ExcurcaoTest::failure_description_test(string value) {
    cout << "Testando valor inválido" << endl;
    try {
        cout << "Horario testado: " << value << endl << endl;
        obj->setDescription(value);
        cout << "Valor aceito!" << endl;
        cout << "O valor atual é: " << obj->getDescription() << endl;
        state = failure;
    } catch(invalid_argument& message) {
        cout << "Valor rejeitado!" << endl;
        cout << "Mensagem de erro: " << message.what() << endl;
    }
    cout << "\n==============================\n\n";
}

void ExcurcaoTest::sucess_nota_test(unsigned int value) {
    cout << "Testando valor válido" << endl;
    try {
        cout << "Horario testado: " << value << endl << endl;
        obj->setNota(value);
        cout << "Valor aceito!" << endl;
        cout << "O valor atual é: " << obj->getNota() << endl;
    } catch(invalid_argument& message) {
        cout << "Valor rejeitado!" << endl;
        cout << "Mensagem de erro: " << message.what() << endl;
        state = failure;
    }
    cout << "\n==============================\n\n";
}

void ExcurcaoTest::failure_nota_test(unsigned int value) {
    cout << "Testando valor inválido" << endl;
    try {
        cout << "Horario testado: " << value << endl << endl;
        obj->setNota(value);
        cout << "Valor aceito!" << endl;
        cout << "O valor atual é: " << obj->getNota() << endl;
        state = failure;
    } catch(invalid_argument& message) {
        cout << "Valor rejeitado!" << endl;
        cout << "Mensagem de erro: " << message.what() << endl;
    }
    cout << "\n==============================\n\n";
}

void ExcurcaoTest::sucess_duration_test(unsigned int value) {
    cout << "Testando valor válido" << endl;
    try {
        cout << "Horario testado: " << value << endl << endl;
        obj->setDuration(value);
        cout << "Valor aceito!" << endl;
        cout << "O valor atual é: " << obj->getDuration() << endl;
    } catch(invalid_argument& message) {
        cout << "Valor rejeitado!" << endl;
        cout << "Mensagem de erro: " << message.what() << endl;
        state = failure;
    }
    cout << "\n==============================\n\n";
}

void ExcurcaoTest::failure_duration_test(unsigned int value) {
    cout << "Testando valor inválido" << endl;
    try {
        cout << "Horario testado: " << value << endl << endl;
        obj->setDuration(value);
        cout << "Valor aceito!" << endl;
        cout << "O valor atual é: " << obj->getDuration() << endl;
        state = failure;
    } catch(invalid_argument& message) {
        cout << "Valor rejeitado!" << endl;
        cout << "Mensagem de erro: " << message.what() << endl;
    }
    cout << "\n==============================\n\n";
}
