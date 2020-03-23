#ifndef PROYECTO_H_INCLUDED
#define PROYECTO_H_INCLUDED

#include "Documento.h"

class Proyecto : public Documento
{
    private:
    char tema[100];
    public:
        Proyecto(char*, int, char*);
        void set_tema(char*);
        const char* get_tema();
        virtual void leer();
        virtual void imprimir();
};



#endif // PROYECTO_H_INCLUDED
