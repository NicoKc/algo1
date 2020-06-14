#include "../lib/gtest.h"
#include "../src/restarAcumulado.h"
#include "../src/utils.h"
#include <vector>

using namespace std;

TEST(restarAcumuladoTEST, caso) {
    vector<int> s{1, 2, 3, 4, 5, 6, 7};
    int x = 90;
    vector<int> esperado{89, 87, 84, 80, 75, 69, 62};

    vector<int> resultado = restarAcumulado(s, x);

    imprimir(resultado);

    EXPECT_EQ(esperado, resultado);
}