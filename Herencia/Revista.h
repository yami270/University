#ifndef REVISTA_H_INCLUDED
#define REVISTA_H_INCLUDED

#include "Documento.h"

class Revista : public Documento
{
    private:
    int numpag;
    public:
        Revista(char*, int, int);
        void set_numpag(int);
        int get_numpag();
        virtual void leer();
        virtual void imprimir();
};


#endif // REVISTA_H_INCLUDED
