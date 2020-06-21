#include "../lib/gtest.h"
#include "../src/ej06.h"

TEST(ordenarTest, caso1) {
    string result = ordenar("hola Homero!");

    ASSERT_EQ(result, " !Haehlmooor");
}
