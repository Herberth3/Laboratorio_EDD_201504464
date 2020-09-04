#include "ordenar.h"

Ordenar::Ordenar()
{

}

void Ordenar::ordenarPorInsercion(string* arreglo, int longitud)
{
    int aux, posicion;
    string aux1;

    for (int i = 0; i < longitud; i++) {
        aux = getAscii(arreglo[i]);
        aux1 = arreglo[i];
        posicion = i;

        while ((posicion > 0) && (getAscii(arreglo[posicion - 1]) > aux)) {
            arreglo[posicion] = arreglo[posicion - 1];
            posicion--;
        }
        arreglo[posicion] = aux1;
    }
}

void Ordenar::imprimir(string* arreglo, int longitud)
{
    for (int i = 0; i < longitud; i++) {
        cout<<arreglo[i]<<" vale: "<<getAscii(arreglo[i])<<endl;
    }
    cout<<endl;
}

int Ordenar::getAscii(string c)
{
    int valorAscii = 0;
    for (int i = 0; i < c.size(); i++) {
        valorAscii += c[i];
    }

    return valorAscii;
}
