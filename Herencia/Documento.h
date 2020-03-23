#ifndef DOCUMENTO_H_INCLUDED
#define DOCUMENTO_H_INCLUDED

class Documento
{
    private:
    char titulo[100];
    int precio;
    public:
    Documento(char*, int);
    void set_titulo(char*);
    const char* get_titulo();
    void set_precio(int);
    int get_precio();
    virtual void leer();
    virtual void imprimir();
};


#endif // DOCUMENTO_H_INCLUDED
