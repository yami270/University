#include "Documento.h"
#include <iostream>
#include <string.h>

using namespace std;

Documento::Documento(char* a , int b)
{
    strcpy(titulo, a);
    precio = b;
}

void Documento::set_precio(int a)
{
    precio = a;
}

int Documento::get_precio()
{
    return precio;
}

void Documento::set_titulo(char *a)
{
    strcpy(titulo, a);
}

const char* Documento::get_titulo()
{
    return titulo;
}

void Documento::leer()
{
    char cad[100];
    int a;
    cout << "Ingrese los datos del libro " << endl;
    cout << "Titulo: ";
    cin >> cad;
    cout << "Precio: ";
    cin >> a;
    set_precio(a);
    set_titulo(cad);
}

void Documento::imprimir()
{
    cout << "Datos del libro " << endl;
    cout << "Titulo: " << get_titulo() << endl;
    cout << "Precio: " << get_precio() << endl;
}
