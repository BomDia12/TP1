#include "main.hpp"

int main() {
    TimeTest time = TimeTest();
    if (time.run())
        return 1;
    
    NotaTest nota = NotaTest();
    if (nota.run())
        return 1;
}
