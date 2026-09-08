#include "Funciones.h"
#include <iostream>
using namespace std;

void Conteoletras(char*Arreglos, int tamaño){

    for (int i = 0; i < tamaño; ++i) {
        cout << (Arreglos+1);
    }
    int Alfabeto[27] = {0};
    for (int i = 0; i < tamaño; ++i) {
        int posicion = *(Arreglos+1)-"A";
        Alfabeto[posicion]++;
    }
    //Impresion de letras que aparecieron
    for (int i = 0; i < 27; ++i) {
        if (Alfabeto[i]>0);
        char letra ="A"+i;
    }
    cout <<letra<<":"<<Alfabeto[i]<<endl;

    }

