#ifndef EXCURCAO_TEST
#define EXCURCAO_TEST
#include "../../Entidades/excurcao.hpp"

/**
 * @author Arthur Motta Furtado 200014935
*/

class ExcurcaoTest {
    private:
        inline static const int sucess = 0;
        inline static const int failure = 1;
        int state;
        Excurcao *obj;

        void set_up();
        void tear_down();

        void sucess_time_test(string);
        void failure_time_test(string);

        void sucess_city_test(string);
        void failure_city_test(string);

        void sucess_title_test(string);
        void failure_title_test(string);

        void sucess_codigo_test(string);
        void failure_codigo_test(string);

        void sucess_address_test(string);
        void failure_address_test(string);

        void sucess_nota_test(unsigned int);
        void failure_nota_test(unsigned int);

        void sucess_description_test(string);
        void failure_description_test(string);

        void sucess_duration_test(unsigned int);
        void failure_duration_test(unsigned int);

    public:
        ExcurcaoTest();
        int run();
};

inline ExcurcaoTest::ExcurcaoTest() {};

#endif