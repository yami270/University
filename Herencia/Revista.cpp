#include "Revista.h"
#include "Documento.h"
#include <iostream>
#include <string.h>

using namespace std;

Revista::Revista(char *t, int p, int a) : Documento(t, p)
{
    numpag = a;
}

int Revista::get_numpag()
{
    return numpag;
}

void Revista::set_numpag(int a)
{
    numpag = a;
}

void Revista::leer()
{
    int a;
    Documento::leer();
    cout << "Numero de paginas: ";
    cin >> a;
    set_numpag(a);
}

void Revista::imprimir()
{
    Documento::imprimir();
    cout << "Numero de paginas : " << get_numpag() << endl;
}
