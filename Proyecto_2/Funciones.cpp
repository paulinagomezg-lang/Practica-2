#include "Funciones.h"
#include <iostream>
using namespace std;

//EJERCICIO 2

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

//EJERCICIO 4

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

//EJERCICIO 6

void Min_mayus(char*cadena){
    int i=0;
    while (*(cadena+i)!= '\0') {
        if(*(cadena+i) >= 'a' && *(cadena+i) <= 'z'){
                *(cadena+i) = *(cadena+i)-32;
            }
        i++;
    }
}

//EJERCICIO 8

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

//EJERCICIO 10

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
    while (*(Roman +i) != '\0') { //difrerente al vacio
        int Actual = Valores_romanos(*(Roman+i));
        int Siguiente = Valores_romanos(*(Roman+i+1)); //observa el que sigue
        if (Actual<Siguiente){
            Resultado = Resultado-Actual; //menor
        }
        else {
            Resultado = Resultado+Actual; //mayor
        }
        i++;
    }
    return Resultado;
}

// EJERCICIO 12
//todas sus filas, todas sus columnas y sus dos diagonales principales sumen exactamente el mismo número. [1] (https://translate.google.com/translate?u=https://mathworld.wolfram.com/MagicSquare.html&hl=es&sl=en&tl=es&client=sge), [2] (https://translate.google.com/translate?u=https://study.com/academy/lesson/what-is-a-magic-square-in-math-history-examples.html&hl=es&sl=en&tl=es&client=sge), [3] (https://es.scribd.com/document/407609609/Cuadrados-Magicos-doc)

 //Lo maximo a lo que puede llegar la matriz

bool Es_un_cuadrado_magico(const int Matriz[][CANT_MAX],int A){
    int Suma_esperada = 0;
    const int *fila_pos_cero = Matriz[0];
    for (int P = 0; P < A; ++P) { //Suma de la primera fila
        Suma_esperada =Suma_esperada+ fila_pos_cero[P];
    }
    for (int i = 0; i < A; ++i) { //Verifica cada fila
        const int *fila = Matriz[i];
        int Suma_fila = 0;
        for (int P = 0; P < A; ++P) {
            Suma_fila = Suma_fila + fila[P];
        }
        if (Suma_fila != Suma_esperada)return false;
    }
    for (int P = 0; P < A; ++P) { //Verificar cada columna
        int Suma_de_la_columna = 0;
        for (int i = 0; i < A; ++i) {
            const int *Elemento = &Matriz[i][P];
            Suma_de_la_columna = Suma_de_la_columna+ *Elemento;
        }
        if (Suma_de_la_columna != Suma_esperada) return false;
    }
    int Suma_diagonal_princi = 0; //Diagonal principal
    for (int i = 0; i < A; ++i) {
        Suma_diagonal_princi = Suma_diagonal_princi+Matriz[i][i];
    }
    if (Suma_diagonal_princi != Suma_esperada) return false;

    int Suma_diagonal_secun =0;
    for (int i = 0; i < A; ++i) {
        Suma_diagonal_secun =Suma_diagonal_secun + Matriz[i][A-1-i];
    }
    if (Suma_diagonal_secun!=Suma_esperada) return false;
    return true;
}
//funcion para los valores de la matriz
void Valoresingresar_de_matriz(int Matriz[][CANT_MAX], int A){
    cout<<"Ingrese los "<<A*A<<" valores de la matriz: "<<endl;
    for (int i = 0; i < A; ++i) {
        for (int P = 0; P < A; ++P) {
            cin >> Matriz[i][P];
        }
    }
}

void Imprimir_matriz(const int Matriz[][CANT_MAX], int A){
    for (int i = 0; i < A; ++i) {
        for (int P = 0; P < A; ++P) {
            cout <<Matriz[i][P]<<"\t"; //separador de texto
        }
        cout <<endl;
    }
}

//EJERCICIO 14

void Llenar_matriz(int Matriz[][MAXIMO], int A){ //Para poder llena rla matriz del 1 al A*A
    int valor = 1;
    for (int i = 0; i < A; ++i){
        for (int P = 0; P < A; ++P) {
            Matriz[i][P] = valor;
            valor++;
        }
    }
}

void Imprimir_la_matriz(const int Matriz[][MAXIMO], int A){ //Imprime la matriz en forma de lectura
    for (int i = 0; i < A; ++i) {
        const int *fila = Matriz[i];
        for (int P = 0; P < A; ++P) {
            cout << fila[P]<<"\t";
        }
        cout <<endl;
    }
}

void Rotacion_90(const int Origen[][MAXIMO], int destino[][MAXIMO], int A){ //Funcion para cumplir la rotacion de 90
    for (int i = 0; i < A; ++i) {
        for (int P = 0; P < A; ++P) {
            destino[i][P] = Origen[A-1-P][i];
        }
    }
}

