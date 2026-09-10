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
    //int funcion numerica
    int Numero =0;
    int i =0;
    int digito=0;
    while(*(cadena+i)!= '\0'){  //cadena puntero que almacena
        digito = *(cadena+i)-'0'; //resta valor del ascci del 0
        Numero = Numero*10+digito;
        i++;
    }
    return Numero;
}

void Min_mayus(char*cadena){
    int i=0;
    while (*(cadena+i)!= '\0') {
        if(*(cadena+i) >= 'a' && *(cadena+i) <= 'z'){
                *(cadena+i) = *(cadena+i)-32;
            }
        i++;
    }
}

void Separnum_letra(char*letras,char*numero,const char*completo){
    int i=0;
    int P =0; //Almacena las letras
    int num =0; //Almacena los numeros
    while (*(completo+i)!= '\0') {
        if (*(completo+i) >= '0' && *(completo+i) <= '9'){
            (*(numero + num)) = (*(completo+i));
            num++;
        }
        else {
            (*(letras + P)) = (*(completo + i));
            P++;
        }
        i++;
    }
    *(numero + num) = '\0';
    *(letras + P) = '\0';
}

int Valores_romanos(char letras){
    if(letras == 'M') return 1000;
    if(letras == 'D') return 500;
    if(letras == 'C') return 100;
    if(letras == 'L') return 50;
    if(letras == 'X') return 10;
    if(letras == 'V') return 5;
    if(letras == 'I') return 1;
    return 0;
}

int Romanos_enteros(const char *Roman){
    int i =0;
    int Resultado =0;
    while (*(Roman +i) != '\0') {
        int Actual = Valores_romanos(*(Roman+i));
        int Siguiente = Valores_romanos(*(Roman+i+1));
        if (Actual<Siguiente){
            Resultado = Resultado-Actual;
        }
        else {
            Resultado = Resultado+Actual;
        }
        i++;
    }
    return Resultado;
}


