#include "../lib/gtest.h"
#include "../src/ej02.h"

TEST(productoPuntoTest, caso1) {
    vector<int> u{1, 2};
    vector<int> v{-3, 4};

    int resultado = productoPunto(u, v);

    ASSERT_EQ(resultado, 5);
}

TEST(productoTranspuestaTest, caso1) {
    matriz a{{2, 0},
             {1, 5},
             {3, 7}};
    matriz resultadoEsperado{{4, 2,  6},
                             {2, 26, 38},
                             {6, 38, 58}};

    matriz b = productoTranspuesta(a);

    ASSERT_EQ(b, resultadoEsperado);
}
