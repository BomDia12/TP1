#include "entity_tests.hpp"

int main() {
    ReviewTest review = ReviewTest();
    if (review.run() == 1)
        return 1;
    
    ExcurcaoTest excurcao = ExcurcaoTest();
    if (excurcao.run() == 1)
        return 1;

    SessionTest session = SessionTest();
    if (session.run() == 1)
        return 1;

    return 0;
}
