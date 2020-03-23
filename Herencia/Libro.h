#ifndef LIBRO_H_INCLUDED
#define LIBRO_H_INCLUDED

#include "Documento.h"

class Libro : public Documento
{
    private:
    int anio;
    char edit[100];
    public:
        Libro(char*, int, int , char *);
        void set_anio(int);
        void set_edit(char *);
        int get_anio();
        const char* get_edit();
        virtual void leer();
        virtual void imprimir();
};



#endif // LIBRO_H_INCLUDED
