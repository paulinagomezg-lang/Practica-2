#include <iostream>
#include "Funciones.h"
#include <cstring>
using namespace std;

int main()
{
    int Z,Resultado;
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









    }

}
