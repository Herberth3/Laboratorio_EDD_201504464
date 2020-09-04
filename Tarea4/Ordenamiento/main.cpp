#include <iostream>
#include "ordenar.h"

using namespace std;

int main()
{
    string a[] = {"hola", "juan", "pais", "consonante", "dinosaurio", "url", "monticulo", "guatemala"};
    int longitudArreglo = sizeof (a)/sizeof (a[0]);
    Ordenar* ord = new Ordenar();

    ord->ordenarPorInsercion(a,longitudArreglo);
    ord->imprimir(a,longitudArreglo);

    delete ord;
    return 0;
}
