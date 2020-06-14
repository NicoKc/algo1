#include <vector>
#include "../lib/gtest.h"
#include "../src/sumasAcumuladas.h"
#include "../src/sumasAcumuladasPro.h"
#include "../src/utils.h"

using namespace std;

TEST(sumaAcumuladasTEST, casoNCuadrado){

    vector<vector<int>> mat1{{1, 2, 3},
                            {4, 5, 6},
                            {7, 8, 9}};

    vector<vector<int>> mat2{{1, 2, 3},
                            {4, 5, 6},
                            {7, 8, 9}};

    sumasAcumuladas(mat1, 3);
    sumasAcumuladasPro(mat2, 3);

    EXPECT_EQ(mat1,mat2);
}