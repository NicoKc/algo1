#include "../src/puntaje.h"
#include "../lib/gtest.h"

// Escribir tests aca:

TEST(PuntajeTEST, MenosDe10) {
    int bolitas = 7;
    int puntajeEsperado = (bolitas * 2) - 10;

    int puntajeObtenido = puntaje(bolitas);

    EXPECT_EQ(puntajeObtenido, puntajeEsperado);
}

TEST(PuntajeTEST, MasDe10) {
    int bolitas = 11;
    int puntajeEsperado = bolitas - 10;

    int puntajeObtenido = puntaje(bolitas);

    EXPECT_EQ(puntajeObtenido, puntajeEsperado);
}

TEST(PuntajeTEST, MenosDe10MultiploDe3) {
    int bolitas = 9;
    int puntajeEsperado = (bolitas * 2) + 10;

    int puntajeObtenido = puntaje(bolitas);

    EXPECT_EQ(puntajeObtenido, puntajeEsperado);
}

TEST(PuntajeTEST, MasDe10MultiploDe3) {
    int bolitas = 15;
    int puntajeEsperado = bolitas + 10;

    int puntajeObtenido = puntaje(bolitas);

    EXPECT_EQ(puntajeObtenido, puntajeEsperado);
}