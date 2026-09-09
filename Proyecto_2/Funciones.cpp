#include "Funciones.h"
#include <iostream>
using namespace std;

void Conteoletras(const char*Arreglos, int tamaño){

    for (int i = 0; i < tamaño; ++i) {
        cout << *(Arreglos+i);
    }
    cout << '\n';
    int Alfabeto[26] = {0};
    for (int i = 0; i < tamaño; ++i) {
        int posicion = *(Arreglos+i)-'A';
        Alfabeto[posicion]++;
    }
    //Impresion de letras que aparecieron
    for (int i = 0; i < 26; ++i) {
        if (Alfabeto[i]>0)
        {
            char letra ='A'+i;
            cout <<letra<<":"<<Alfabeto[i]<<endl;
        }
    }
}

int Caracter_numero(const char*cadena){ //Se entrega cadena a la funcion
    int Numero =0;
    int i =0;
    int digito=0;
    while(*(cadena+i)!= '\0'){
        digito = *(cadena+i)-'0';
        Numero = Numero*10+digito;
        i++;
    }
    return Numero;



}

