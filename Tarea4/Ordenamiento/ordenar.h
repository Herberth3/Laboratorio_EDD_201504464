#ifndef ORDENAR_H
#define ORDENAR_H
#include "iostream"
#include <string>
using namespace std;

class Ordenar
{
public:
    Ordenar();
    void ordenarPorInsercion(string*, int);
    void imprimir(string*, int);
private:
    int getAscii(string);
};

#endif // ORDENAR_H
