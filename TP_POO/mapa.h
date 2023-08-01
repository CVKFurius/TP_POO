#ifndef MAPA_H
#define MAPA_H


class Mapa
{
private:
    int fila,columna;
public:
    Mapa(int,int);
    int getFila();
    void setFila(int);
    int getColumna();
    void setColumna(int);
    int** generarMapa();
    void llenarMapaYMostrar();

};

#endif // MAPA_H
