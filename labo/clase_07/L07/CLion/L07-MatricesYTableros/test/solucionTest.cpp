#include "../lib/gtest.h"
#include "../src/solucion.h"

TEST(ImprimirTest, caso1) {
    vector<vector<int>> mat = {{1, 2},
                               {2, 3},
                               {3, 4}};

    imprimir(mat);
}
