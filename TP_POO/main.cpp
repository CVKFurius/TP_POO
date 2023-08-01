#include "mapa.h"
#include <iostream>

using namespace std;

int main()
{
    int fila,columna;
    cout<<"Ingrese la cantidad de Filas y columnas que desea: ";cout<<endl;
    cin>>fila;cout<<endl;
    cin>>columna;
    Mapa M1(fila,columna);
    M1.generarMapa();
    M1.llenarMapaYMostrar();
    return 0;
}
