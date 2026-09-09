#include <iostream>
#include "Funciones.h"
using namespace std;

int main()
{
    int Z,Resultado;
    const int Tam_arreglo = 200;
    char caract_numer [12],letra[Tam_arreglo];
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
        cin.ignore();
        cin.getline(caract_numer, sizeof(caract_numer));
        Resultado = Caracter_numero(caract_numer);
        cout <<"la cadena"<<caract_numer <<" en entero es: "<<Resultado<<endl;
        break;



    }

}
