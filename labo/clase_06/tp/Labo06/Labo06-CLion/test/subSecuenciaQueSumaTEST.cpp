#include "../src/subSecuenciaQueSuma.h"
#include "../lib/gtest.h"

TEST(SubSecuenciaQueSumaTEST, VaciaYCero) {
    vector<int> vacia(0);
    int cero = 0;

    int result = subSecunciaQueSuma(vacia, cero);

    EXPECT_FALSE(result);
}

TEST(SubSecuenciaQueSumaTEST, VaciaYNoCero) {
    vector<int> vacia(0);
    int n = 7;

    int result = subSecunciaQueSuma(vacia, n);

    EXPECT_FALSE(result);
}

TEST(SubSecuenciaQueSumaTEST, ExisteSubSecuencia) {
    vector<int> secuencia{0, 1, 0, 0, 1, 1, 0, 0, 0};
    int n = 2;

    int result = subSecunciaQueSuma(secuencia, n);

    EXPECT_TRUE(result);
}

TEST(SubSecuenciaQueSumaTEST, ExisteSubSecuenciaUnosYCeros) {
    vector<int> secuencia{1, 0, 1, 1, 0, 1, 1, 0, 1};
    int n = 3;

    int result = subSecunciaQueSuma(secuencia, n);

    EXPECT_TRUE(result);
}

TEST(SubSecuenciaQueSumaTEST, ExisteSubSecuenciaConMayor) {
    vector<int> secuencia{1, 0, 1, 1, 0, 9, 1, 5, 1};
    int n = 7;

    int result = subSecunciaQueSuma(secuencia, n);

    EXPECT_TRUE(result);
}

TEST(SubSecuenciaQueSumaTEST, ExisteSubSecuenciaNegativosDespues) {
    vector<int> secuencia{1, 0, 1, 1, 0, 9, -2, 5, 1};
    int n = 7;

    int result = subSecunciaQueSuma(secuencia, n);

    EXPECT_TRUE(result);
}

TEST(SubSecuenciaQueSumaTEST, ExisteSubSecuenciaNegativosAntes) {
    vector<int> secuencia{1, 0, 1, 1, 0, -2, 9, 5, 1};
    int n = 7;

    int result = subSecunciaQueSuma(secuencia, n);

    EXPECT_TRUE(result);
}