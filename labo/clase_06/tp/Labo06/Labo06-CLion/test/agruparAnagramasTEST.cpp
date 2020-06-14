#include "../src/agruparAnagramas.h"
#include "../lib/gtest.h"

TEST(agruparAnagramasTEST, casoDeLaGuia) {

    vector<vector<string>> result = agruparAnagramas({"ab", "cd", "ef", "ba", "ab", "dc"});

    EXPECT_EQ(result.size(), 3);

    EXPECT_EQ(result[0].size(), 3);
    EXPECT_TRUE(result[0][0] == "ab");
    EXPECT_TRUE(result[0][1] == "ba");
    EXPECT_TRUE(result[0][2] == "ab");

    EXPECT_EQ(result[1].size(), 2);
    EXPECT_TRUE(result[1][0] == "cd");
    EXPECT_TRUE(result[1][1] == "dc");

    EXPECT_EQ(result[2].size(), 1);
    EXPECT_TRUE(result[2][0] == "ef");
}

TEST(agruparAnagramasTEST, casoMasRebuscado) {

    vector<vector<string>> result = agruparAnagramas({"llpp", "wasd", "qwer", "werq", "erwq", "lplp", "1234", "sdaw"});

    EXPECT_EQ(result.size(), 4);

    EXPECT_EQ(result[0].size(), 2);
    EXPECT_TRUE(result[0][0] == "llpp");
    EXPECT_TRUE(result[0][1] == "lplp");

    EXPECT_EQ(result[1].size(), 2);
    EXPECT_TRUE(result[1][0] == "wasd");
    EXPECT_TRUE(result[1][1] == "sdaw");

    EXPECT_EQ(result[2].size(), 3);
    EXPECT_TRUE(result[2][0] == "qwer");
    EXPECT_TRUE(result[2][1] == "werq");
    EXPECT_TRUE(result[2][2] == "erwq");

    EXPECT_EQ(result[3].size(), 1);
    EXPECT_TRUE(result[3][0] == "1234");
}
