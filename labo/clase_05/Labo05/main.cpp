#include <iostream>
#include "ejercicios.h"

using namespace std;


int main()
{

    /******************estaOrdenado*******************/
    cout << endl<< endl << "Test estaOrdenada" <<endl<<endl;

    vector<int> ordDesc = {123, 3, 0, -1, -123};
    vector<int> ordAsc = {-501, 0, 12, 456, 501, 99999};
    vector<int> vacio = {};
    vector<int> desord = {-1, 0, 1, -1, 56, 98, 10};
    vector<int> unoSolo = {23};
    vector<int> soloDos = {1,2};
    vector<int> pico = {-4,-3,-2,-1,0,-1,-2,-3,-4};
    vector<int> dosPicos = {0,1,2,3,4,3,2,1,0,1,2,3,4,3,2,1};
    vector<int> iguales = {0,0,0,0,0,0,0,0,0,0};

    string resOrdenado1 = "False";
    if(estaOrdenado(ordDesc)){
        resOrdenado1 = "True";
    }
    cout << "1-Resultado: " << resOrdenado1 << " - Valor Esperado: True" << endl;

    string resOrdenado2 = "False";
    if(estaOrdenado(ordAsc)){
        resOrdenado2 = "True";
    }
    cout << "2-Resultado: " << resOrdenado2 << " - Valor Esperado: True" << endl;

    string resOrdenado3 = "False";
    if(estaOrdenado(vacio)){
        resOrdenado3 = "True";
    }
    cout << "3-Resultado: " << resOrdenado3 << " - Valor Esperado: True" << endl;

    string resOrdenado4 = "False";
    if(estaOrdenado(desord)){
        resOrdenado4 = "True";
    }
    cout << "4-Resultado: " << resOrdenado4 << " - Valor Esperado: False" << endl;


    string resOrdenado5 = "False";
    if(estaOrdenado(unoSolo)){
        resOrdenado5 = "True";
    }
    cout << "5-Resultado: " << resOrdenado5 << " - Valor Esperado: True" << endl;

    string resOrdenado6 = "False";
    if(estaOrdenado(soloDos)){
        resOrdenado6 = "True";
    }
    cout << "6-Resultado: " << resOrdenado6 << " - Valor Esperado: True" << endl;

    string resOrdenado7 = "False";
    if(estaOrdenado(dosPicos)){
        resOrdenado7 = "True";
    }
    cout << "7-Resultado: " << resOrdenado7 << " - Valor Esperado: False" << endl;

    string resOrdenado8 = "False";
    if(estaOrdenado(iguales)){
        resOrdenado8 = "True";
    }
    cout << "8-Resultado: " << resOrdenado8 << " - Valor Esperado: True" << endl;

    /******************estaOrdenado*******************/

    /******************pertenece*******************/
    cout << endl<< endl << "Test pertenece" <<endl<<endl;

    vector<int> enteros= {5, -323, 253, 0, -7, 100};
    vector<int> vec_vacio= {};
    vector<int> todosIguales = {1,1,1,1,1,1,1,1,1,1,1};


    string resPertenece1 = "False";
    if(pertenece(0, enteros)){
        resPertenece1 = "True";
    }
    cout << "1-Resultado: " << resPertenece1 << " - Valor Esperado: True" << endl;


    string resPertenece2 = "False";
    if(pertenece(7, enteros)){
        resPertenece2 = "True";
    }
    cout << "2-Resultado: " << resPertenece2 << " - Valor Esperado: False" << endl;

    string resPertenece3 = "False";
    if(pertenece(100, enteros)){
        resPertenece3 = "True";
    }
    cout << "3-Resultado: " << resPertenece3 << " - Valor Esperado: True" << endl;

    string resPertenece4 = "False";
    if(pertenece(-323, enteros)){
        resPertenece4 = "True";
    }
    cout << "4-Resultado: " << resPertenece4 << " - Valor Esperado: True" << endl;

    string resPertenece5 = "False";
    if(pertenece(1, vec_vacio)){
        resPertenece5 = "True";
    }
    cout << "5-Resultado: " << resPertenece5 << " - Valor Esperado: False" << endl;

    string resPertenece6 = "False";
    if(pertenece(1, todosIguales)){
        resPertenece6 = "True";
    }
    cout << "6-Resultado: " << resPertenece6 << " - Valor Esperado: True" << endl;


    string resPertenece7 = "False";
    if(pertenece(4, todosIguales)){
        resPertenece7 = "True";
    }
    cout << "7-Resultado: " << resPertenece7 << " - Valor Esperado: False" << endl;

    /******************pertenece*******************/

    /******************fibonacci*******************/
    cout << endl<< endl << "Test fibonacci" <<endl<<endl;

    cout << "1-Resultado: " << fibonacci(0) << " - Valor Esperado: 0" << endl;
    cout << "2-Resultado: " << fibonacci(1) << " - Valor Esperado: 1" << endl;
    cout << "3-Resultado: " << fibonacci(2) << " - Valor Esperado: 2" << endl;
    cout << "4-Resultado: " << fibonacci(3) << " - Valor Esperado: 2" << endl;
    cout << "5-Resultado: " << fibonacci(4) << " - Valor Esperado: 3" << endl;
    cout << "6-Resultado: " << fibonacci(5) << " - Valor Esperado: 5" << endl;
    cout << "7-Resultado: " << fibonacci(7) << " - Valor Esperado: 13" << endl;
    cout << "8-Resultado: " << fibonacci(15) << " - Valor Esperado: 610" << endl;
    cout << "9-Resultado: " << fibonacci(50) << " - Valor Esperado: 12586269025" << endl;
    cout << "10-Resultado: " << fibonacci(16) << " - Valor Esperado: 987" << endl;
    cout << "11-Resultado: " << fibonacci(45) << " - Valor Esperado: 1134903170" << endl;

    /******************fibonacci*******************/

    /******************sumaDoble*******************/
    cout << endl<< endl << "Test sumaDoble" <<endl<<endl;

    vector<int> impares = {1,3,5,7,9,11,23,33,99,101};
    vector<int> pares= {2,4,6,8,10,50,990};
    vector<int> mezcla = {-1, 0, 500, 22, -2, 35, 16, -10, 12, 66, 76, -2};
    vector<int> vacio1= {};
    vector<int> paresNeg = {-2,1,1,1,-2,2,1,-2,-2,1};

    cout << "1-Resultado: " << sumaDoble(impares) << " - Valor Esperado: 0" << endl;
    cout << "2-Resultado: " << sumaDoble(pares) << " - Valor Esperado: 2140" << endl;
    cout << "3-Resultado: " << sumaDoble(mezcla) << " - Valor Esperado: 1384" << endl;
    cout << "4-Resultado: " << sumaDoble(vacio1) << " - Valor Esperado: 0" << endl;
    cout << "5-Resultado: " << sumaDoble(paresNeg) << " - Valor Esperado: 4" << endl;

    /******************sumaDoble*******************/

    /******************existePico*******************/
    cout << endl<< endl << "Test existePico" <<endl<<endl;

    vector<int> dosPicos1 = {9, 20, 1, 3, 2};
    string resExistePico1 = "False";
    if(existePico(dosPicos1)){
        resExistePico1 = "True";
    }
    cout << "1-Resultado: " << resExistePico1 << " - Valor Esperado: True" << endl;

    vector<int> ningunPico = {3, 1, 0};
    string resExistePico2 = "False";
    if(existePico(ningunPico)){
        resExistePico2 = "True";
    }
    cout << "2-Resultado: " << resExistePico2 << " - Valor Esperado: False" << endl;

    vector<int> ningunPico1 = {-2, -1, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    string resExistePico3 = "False";
    if(existePico(ningunPico1)){
        resExistePico3 = "True";
    }
    cout << "3-Resultado: " << resExistePico3 << " - Valor Esperado: False" << endl;

    vector<int> unPico = {3, 4, 2};
    string resExistePico4 = "False";
    if(existePico(unPico)){
        resExistePico4 = "True";
    }
    cout << "4-Resultado: " << resExistePico4 << " - Valor Esperado: True" << endl;

    vector<int> unPico1 = {1, 3, 2, 4, 6, 7};
    string resExistePico5 = "False";
    if(existePico(unPico1)){
        resExistePico5 = "True";
    }
    cout << "5-Resultado: " << resExistePico5 << " - Valor Esperado: True" << endl;

    vector<int> unPico2 = {1, 2, 3, 4, 7, 6};
    string resExistePico6 = "False";
    if(existePico(unPico2)){
        resExistePico6 = "True";
    }
    cout << "6-Resultado: " << resExistePico6 << " - Valor Esperado: True" << endl;

    /******************existePico*******************/

    /******************todosImpares*******************/
    cout << endl<< endl << "Test todosImpares" <<endl<<endl;

    vector<int> muchosElementos = {3, 7,  5, 4};
    string resTodosImpares1 = "False";
    if(todosImpares(muchosElementos)){
        resTodosImpares1 = "True";
    }
    cout << "1-Resultado: " << resTodosImpares1 << " - Valor Esperado: False" << endl;

    vector<int> muchosElementos1 = {2, 1,  1, 2, 3, 4, 5, 6, 7};
    string resTodosImpares2 = "False";
    if(todosImpares(muchosElementos1)){
        resTodosImpares2 = "True";
    }
    cout << "2-Resultado: " << resTodosImpares2 << " - Valor Esperado: False" << endl;

    vector<int> impares1 = {5, 1,  1, 3, 3, 17, 5, 11, 7};
    string resTodosImpares3 = "False";
    if(todosImpares(impares1)){
        resTodosImpares3 = "True";
    }
    cout << "3-Resultado: " << resTodosImpares3 << " - Valor Esperado: True" << endl;

    vector<int> impar = {3};
    string resTodosImpares4 = "False";
    if(todosImpares(impar)){
        resTodosImpares4 = "True";
    }
    cout << "4-Resultado: " << resTodosImpares4 << " - Valor Esperado: True" << endl;

    vector<int> par = {2};
    string resTodosImpares5 = "False";
    if(todosImpares(par)){
        resTodosImpares5 = "True";
    }
    cout << "5-Resultado: " << resTodosImpares5 << " - Valor Esperado: False" << endl;

    /******************todosImpares*******************/


    /******************sumaPrimos*******************/
    cout << endl<< endl << "Test sumaPrimos" <<endl<<endl;

    cout << "1-Resultado: " << sumaPrimos(3) << " - Valor Esperado: 3" << endl;
    cout << "1-Resultado: " << sumaPrimos(5) << " - Valor Esperado: 8" << endl;
    cout << "1-Resultado: " << sumaPrimos(6) << " - Valor Esperado: 8" << endl;
    cout << "1-Resultado: " << sumaPrimos(7) << " - Valor Esperado: 15" << endl;
    cout << "2-Resultado: " << sumaPrimos(8) << " - Valor Esperado: 15" << endl;

    /******************sumaPrimos*******************/

    /******************indiceMinimoSubsec*******************/
    cout << endl<< endl << "Test indiceMinimoSubsec" <<endl<<endl;

    vector<int> unElemento = {56};
    cout << "1-Resultado: " << indiceMinimoSubsec(unElemento, 0, 0) << " - Valor Esperado: 0" << endl;

    vector<int> dosElementos = {56, -34};
    cout << "2-Resultado: " << indiceMinimoSubsec(dosElementos, 0, 1) << " - Valor Esperado: 1" << endl;

    vector<int> muchosElementos2 = {56, -34, 4, 5, 3, 2345, -1, 6, 5, 3, 21, -200, 34, 6, 1, 8, 3};
    cout << "3-Resultado: " << indiceMinimoSubsec(muchosElementos2, 0, 16) << " - Valor Esperado: 11" << endl;
    cout << "4-Resultado: " << indiceMinimoSubsec(muchosElementos2, 1, 10) << " - Valor Esperado: 1" << endl;
    cout << "5-Resultado: " << indiceMinimoSubsec(muchosElementos2, 1, 11) << " - Valor Esperado: 11" << endl;

    /******************indiceMinimoSubsec*******************/

    /******************sumatoria*******************/
    cout << endl<< endl << "Test sumatoria" <<endl<<endl;

    vector<int> vacia = {};
    cout << "1-Resultado: " << sumatoria(vacia) << " - Valor Esperado: 0" << endl;

    vector<int> unElemento1 = {23};
    cout << "2-Resultado: " << sumatoria(unElemento1) << " - Valor Esperado: 23" << endl;

    vector<int> dosElementos1 = {56, -34};
    cout << "3-Resultado: " << sumatoria(dosElementos1) << " - Valor Esperado: 22" << endl;

    vector<int> muchosElementos3 = {56, -34, 4, 5, 3, 2345, -1, 6, 5, 3, 21, -200, 34, 6, 1, 8, 3};
    cout << "4-Resultado: " << sumatoria(muchosElementos3) << " - Valor Esperado: 2265" << endl;

    /******************sumatoria*******************/

    /******************ordenar*******************/
    cout << endl<< endl << "Test ordenar" <<endl<<endl;

    vector<int> unElemento2 = {23};
    ordenar(unElemento2);
    vector<int> resOrdenar1 = {23};

    cout << "1-Resultado: " << mostrarVector(unElemento2) << " - Valor Esperado: " << mostrarVector(resOrdenar1)<< endl;


    vector<int> desordenados = {56, -34};
    ordenar(desordenados);
    vector<int> resOrdenar2 = {-34, 56};

    cout << "2-Resultado: " << mostrarVector(desordenados) << " - Valor Esperado: " << mostrarVector(resOrdenar2)<< endl;


    vector<int> desordenados1 = {56, -34, 4, 5, 3, 2345, -1, 6, 5, 3, 21, -200, 34, 6, 1, 8, 3};
    ordenar(desordenados1);
    vector<int> resOrdenar3 = {-200, -34, -1, 1, 3, 3, 3, 4, 5, 5, 6, 6, 8, 21, 34, 56,  2345};

    cout << "3-Resultado: " << mostrarVector(desordenados1) << " - Valor Esperado: " << mostrarVector(resOrdenar3)<< endl;

    /******************ordenar*******************/

    return 0;
}

