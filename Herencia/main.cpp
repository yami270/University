#include <iostream>
#include "Documento.h"
#include "Libro.h"
#include "Revista.h"
#include "Proyecto.h"

using namespace std;

int main()
{
    Documento d1("Documento 1", 21);
    d1.imprimir();
    cout << endl;

    Libro l1("Programacion 1", 34, 2014, "kipus");
    l1.imprimir();
    cout << endl;

    Proyecto p1("Proyecto 1", 100, "Disenio de sistemas");
    p1.imprimir();
    cout << endl;

    Revista r1("Revista 1", 10, 50);
    r1.imprimir();
    cout << endl;
    return 0;
}

// Programa que implementa una herencia de clases + polimorfismo
// Documento es la clase Padre, y Libro, Proyecto y Revista son las clases dereivadas
