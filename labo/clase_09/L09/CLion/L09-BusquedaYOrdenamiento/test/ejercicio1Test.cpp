#include "../lib/gtest.h"
#include "../src/ejercicio1.h"
#include <vector>
#include <iostream>

vector<pair<string, string>> anagramas = {
        make_pair("alegan", "angela"),
        make_pair("riesgo", "sergio"),
        make_pair("valora", "alvaro"),
        make_pair("agonista", "santiago"),
        make_pair("colinas", "nicolas"),
        make_pair("calar", "carla"),
        make_pair("quieren", "enrique"),
        make_pair("prisa", "paris"),
        make_pair("riesgo", "sergio"),
        make_pair("poder", "pedro"),
        make_pair("ramon", "norma"),
        make_pair("necrofila", "florencia"),
        make_pair("poder", "pedro"),
        make_pair("armonia", "mariano"),
        make_pair("mora", "roma"),
        make_pair("salario", "rosalia"),
        make_pair("saunas", "susana"),
        make_pair("ovoide", "oviedo")
};

vector<pair<string, string>> noAnagramas = {
        make_pair("alegan", "anjela"),
        make_pair("riesg", "sergio"),
        make_pair("valorra", "alvaro"),
        make_pair("agonizta", "santiago"),
        make_pair("coiinas", "nicolas"),
        make_pair("calor", "calla"),
        make_pair("quieren", "enrikue"),
        make_pair("prisa", "pariz"),
        make_pair("riesjo", "sergio"),
        make_pair("puder", "pedro"),
        make_pair("ranon", "norma"),
        make_pair("necroflla", "florencia"),
        make_pair("poddr", "pedro"),
        make_pair("arnonia", "mariano"),
        make_pair("mora", "joma"),
        make_pair("salario", "rosalya"),
        make_pair("saunas", "suzana"),
        make_pair("ovoidh", "oviedo")
};

TEST(AnagramaTest, conOrdenamiento) {
    string p1 = "";
    string p2 = "";

    for (int i = 0; i < anagramas.size(); i++) {
        p1 = anagramas[i].first;
        p2 = anagramas[i].second;
//        cout << "=============" << endl;
//        cout << "p1= " << p1 << endl;
//        cout << "p2= " << p2 << endl;
//        cout << "=============" << endl;
        ASSERT_TRUE(esAnagramaConOrdenamiento(p1, p2));
    }
}

TEST(AnagramaTest, conNumerosPrimos) {
    string p1 = "";
    string p2 = "";

    for (int i = 0; i < anagramas.size(); i++) {
        p1 = anagramas[i].first;
        p2 = anagramas[i].second;
//        cout << "=============" << endl;
//        cout << "p1= " << p1 << endl;
//        cout << "p2= " << p2 << endl;
//        cout << "=============" << endl;
        ASSERT_TRUE(esAnagramaConNumerosPrimos(p1, p2));
    }
}

TEST(AnagramaTest, conMetodoPersonal) {
    string p1 = "";
    string p2 = "";

    for (int i = 0; i < anagramas.size(); i++) {
        p1 = anagramas[i].first;
        p2 = anagramas[i].second;
//        cout << "=============" << endl;
//        cout << "p1= " << p1 << endl;
//        cout << "p2= " << p2 << endl;
//        cout << "=============" << endl;
        ASSERT_TRUE(esAnagramaConMetodoPersonal(p1, p2));
    }
}

TEST(AnagramaTest, noConOrdenamiento) {
    string p1 = "";
    string p2 = "";

    for (int i = 0; i < noAnagramas.size(); i++) {
        p1 = noAnagramas[i].first;
        p2 = noAnagramas[i].second;
//        cout << "=============" << endl;
//        cout << "p1= " << p1 << endl;
//        cout << "p2= " << p2 << endl;
//        cout << "=============" << endl;
        ASSERT_FALSE(esAnagramaConOrdenamiento(p1, p2));
    }
}

TEST(AnagramaTest, noConNumerosPrimos) {
    string p1 = "";
    string p2 = "";

    for (int i = 0; i < noAnagramas.size(); i++) {
        p1 = noAnagramas[i].first;
        p2 = noAnagramas[i].second;
//        cout << "=============" << endl;
//        cout << "p1= " << p1 << endl;
//        cout << "p2= " << p2 << endl;
//        cout << "=============" << endl;
        ASSERT_FALSE(esAnagramaConNumerosPrimos(p1, p2));
    }
}

TEST(AnagramaTest, noConMetodoPersonal) {
    string p1 = "";
    string p2 = "";

    for (int i = 0; i < noAnagramas.size(); i++) {
        p1 = noAnagramas[i].first;
        p2 = noAnagramas[i].second;
//        cout << "=============" << endl;
//        cout << "p1= " << p1 << endl;
//        cout << "p2= " << p2 << endl;
//        cout << "=============" << endl;
        ASSERT_FALSE(esAnagramaConMetodoPersonal(p1, p2));
    }
}