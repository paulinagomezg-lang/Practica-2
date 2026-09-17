#ifndef FUNCIONES_H
#define FUNCIONES_H

const int CANT_MAX = 10;
const int MAXIMO = 5;
const int CANTIDAD_MAX = 20;
const int NUMERO_DIGITOS =10;

void Conteoletras(const char*Arreglos, int tamaño);
int Caracter_numero(const char*cadena);
void Min_mayus(char*cadena);
void Separnum_letra(char*letras,char*numero,const char*completo);
int Valores_romanos(char *letras);
int Romanos_enteros(const char *Roman);
bool Es_un_cuadrado_magico(const int Matriz[][CANT_MAX],int A);
void Valoresingresar_de_matriz(int Matriz[][CANT_MAX], int A);
void Imprimir_matriz(const int Matriz[][CANT_MAX], int A);
void Llenar_matriz(int Matriz[][MAXIMO], int A);
void Imprimir_la_matriz(const int Matriz[][MAXIMO], int A);
void Rotacion_90(const int Origen[][MAXIMO], int destino[][MAXIMO], int A);
int Caminos_posibles(int A);
void Permutacion_lexicografica( int A, int *Resultado);


#endif // FUNCIONES_H
