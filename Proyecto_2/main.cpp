#include <iostream>
#include "Funciones.h"
#include <cstring>
using namespace std;

int main()
{
    int Z,Resultado,A;
    const int Tam_arreglo = 200;
    char caract_numer [12]/*4*/,letra[Tam_arreglo]/*2*/,texto[100],original[100]/*6*/,completo[100],numero[100],letras[100]/*8*/,Romanos[100];
    cout <<"Ingrese el problema PAR que desea realizar ;)"<<endl;
    cin >>Z;
    switch (Z) {

    case 2:
        // Inicializa la semilla para que los números aleatorios cambien en cada ejecución
        srand(time(0));
        // Generar 200 letras mayúsculas aleatorias ('A' a 'Z')
        for (int i = 0; i < Tam_arreglo; ++i) {
            letra[i] = 'A' + (rand() % 26);
        }

        // Procesar e imprimir el arreglo
        Conteoletras(letra, Tam_arreglo);
        break;

    case 4:

        cout <<"Ingrese el numero que desea convertir a entero"<<endl;
        cin.ignore(); //
        cin.getline(caract_numer, sizeof(caract_numer)); //size lee tamaño real en memoria
        Resultado = Caracter_numero(caract_numer);
        cout <<"la cadena "<<caract_numer <<" en entero es: "<<Resultado<<endl;
        break;

    case 6:
        cout <<"Ingresa la palabra que te gustaria cambiar a mayuscula"<<endl;
        cin.ignore();
        cin.getline(texto,100); //lee linea completa de texto
        for (int i = 0; texto[i] !='\0'; ++i) {
            original[i] = texto[i];
        }
        original [strlen(texto)] = '\0';
        Min_mayus(texto);
        cout <<"Original: "<<original<<" En mayuscula: "<<texto<<"."<<endl;
        break;

    case 8:
        cout <<"Ingrese la cadena de caracteres de numeros y letras para separar"<<endl;
        cin.ignore();
        cin.getline(completo,100);
        Separnum_letra(letras,numero,completo);
        cout <<"Original: "<< completo<<endl;
        cout <<"Texto: "<<letras<<" Numeros: "<<numero<<endl;
        break;

    case 10:
        cout <<"Ingrese el numero Romano que quiere conocer entero"<<endl;
        cin.ignore();
        cin.getline(Romanos, sizeof(Romanos));
        Resultado = Romanos_enteros(Romanos);
        cout << "El numero ingresado fue: "<<Romanos<<endl;
        cout <<"Que corresponde a: "<<Resultado<<endl;
        break;


    case 12:
        cout <<"Ingrese el tamanio de la matriz :) : "<<endl;
        cin >> A;
        int Matriz[CANT_MAX][CANT_MAX];
        if (A<=0||A>CANT_MAX){
            cout <<"TAMAÑO INVALIDO, TE PASASTE Y LO SABES :("<<endl;
            return 1;
        }
        Valoresingresar_de_matriz(Matriz,A);
        cout <<"Matriz ingresada :0 : "<<endl;
        Imprimir_matriz(Matriz, A);
        if ( Es_un_cuadrado_magico(Matriz,A)){
            cout <<"La matriz es una matriz magica :0"<<endl;
        }
        else{
            cout <<"La matriz no es una matriz magica :("<<endl;
        }
        break;


    case 14:
        int Original[MAXIMO][MAXIMO];
        int Rotar_90[MAXIMO][MAXIMO];
        int Rotar_180[MAXIMO][MAXIMO];
        int Rotar_270[MAXIMO][MAXIMO];
        Llenar_matriz(Original, MAXIMO);
        cout <<"MATRIZ ORIGINAL : <3"<<endl;
        Imprimir_la_matriz(Original, MAXIMO);

        Rotacion_90(Original, Rotar_90, MAXIMO);
        cout <<"MATRIZ ROTADA 90: <3"<<endl;
        Imprimir_la_matriz(Rotar_90, MAXIMO);

        Rotacion_90(Original, Rotar_180, MAXIMO);
        cout <<"MATRIZ ROTADA 180: <3"<<endl;
        Imprimir_la_matriz(Rotar_180, MAXIMO);

        Rotacion_90(Original, Rotar_270, MAXIMO);
        cout <<"MATRIZ ROTADA 270: <3"<<endl;
        Imprimir_la_matriz(Rotar_270, MAXIMO);

        break;










    }

}
