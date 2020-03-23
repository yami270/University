#include "Libro.h"
#include "Documento.h"
#include <iostream>
#include <string.h>

using namespace std;

Libro::Libro(char *t, int p, int a, char* cad) : Documento(t, p)
{
    anio = a;
    strcpy(edit, cad);
}

int Libro::get_anio()
{
    return anio;
}

void Libro::set_anio(int a)
{
    anio = a;
}

const char* Libro::get_edit()
{
    return edit;
}

void Libro::set_edit(char* cad)
{
    strcpy(edit, cad);
}

void Libro::leer()
{
    int a;
    char b[100];
    Documento::leer();
    cout << "Anio: ";
    cin >> a;
    cout << "Editorial: ";
    cin >> b;
    set_anio(a);
    set_edit(b);
}

void Libro::imprimir()
{
    Documento::imprimir();
    cout << "Anio : " << get_anio() << endl;
    cout << "Editorial: " << get_edit() << endl;
}
