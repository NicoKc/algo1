#include "../lib/gtest.h"
#include "../src/ejercicio4.h"

TEST(esMenorTest, caso1) {
    string x = "Ejemplo00";
    string y = "Ejemplo12a123";
    bool result = esMenor(x, y);
    ASSERT_TRUE(result);
}

TEST(esMenorTest, caso2) {
    string x = "Ejemplo000";
    string y = "Ejemplo00";
    bool result = esMenor(x, y);
    ASSERT_FALSE(result);
}

TEST(esMenorTest, caso3) {
    string x = "Ejemplo12a123";
    string y = "Ejemplo0000";
    bool result = esMenor(x, y);
    ASSERT_FALSE(result);
}

TEST(esMenorTest, caso4) {
    string x = "Ejemplo12a123";
    string y = "Ejemplos0000";
    bool result = esMenor(x, y);
    ASSERT_TRUE(result);
}

TEST(esMenorTest, caso5) {
    string x = "Ejemplo1";
    string y = "Ejemplo00";
    bool result = esMenor(x, y);
    ASSERT_FALSE(result);
}

TEST(esMenorTest, caso6) {
    string x = "Ejemplo000";
    string y = "Ejemplo0000";
    bool result = esMenor(x, y);
    ASSERT_TRUE(result);
}

TEST(natSorted, caso1) {
    vector<string> s = {
            "Ejemplo12a123",
            "Ejemplo0000",
            "Ejemplo12a2",
            "Ejemplo00",
            "Ejemplo12a",
            "Ejemplo12",
            "Ejemplo000",
            "Ejemplo2",
            "Ejemplo12a2",
            "Ejemplos0000",
            "Ejemplo1",
            "Ejemplo124",
            "Ejemplo12a12"
    };

    vector<string> expected = {
            "Ejemplo00",
            "Ejemplo000",
            "Ejemplo0000",
            "Ejemplo1",
            "Ejemplo2",
            "Ejemplo12",
            "Ejemplo12a",
            "Ejemplo12a2",
            "Ejemplo12a12",
            "Ejemplo12a123",
            "Ejemplo124",
            "Ejemplos0000"
    };

    natSorted(s);

    ASSERT_EQ(s, expected);
}