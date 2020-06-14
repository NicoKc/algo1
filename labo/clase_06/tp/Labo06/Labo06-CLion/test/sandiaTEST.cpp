#include "../src/sandia.h"
#include "../lib/gtest.h"

TEST(SandiaTEST, PorcionesPares) {
    int porciones = 18;

    bool resultado = sandia(porciones);

    EXPECT_TRUE(resultado);
}

TEST(SandiaTEST, PorcionesImpares) {
    int porciones = 5;

    bool resultado = sandia(porciones);

    EXPECT_FALSE(resultado);
}
