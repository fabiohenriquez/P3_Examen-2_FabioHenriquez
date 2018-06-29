#ifndef LISTA_H
#define LISTA_H
#include <iostream>
#include <string>
#include "Nodo.h"

using namespace std;

class lista{
    private:
        Nodo* siguiente=NULL;
    public:
        lista();
        void agregar(Nodo*);
        void imprimir(int);

};

#endif