#include "Proyecto.h"
#include "Documento.h"
#include <iostream>
#include <string.h>

using namespace std;

Proyecto::Proyecto(char *t, int p, char* cad) : Documento(t, p)
{
    strcpy(tema, cad);
}

const char* Proyecto::get_tema()
{
    return tema;
}

void Proyecto::set_tema(char* cad)
{
    strcpy(tema, cad);
}

void Proyecto::leer()
{
    char b[100];
    Documento::leer();
    cout << "Tema: ";
    cin >> b;
    set_tema(b);
}

void Proyecto::imprimir()
{
    Documento::imprimir();
    cout << "Tema: " << get_tema() << endl;
}
