#ifndef NODO_H
#define NODO_H
#include "Seleccion.h"

class Nodo{

  private:
    Seleccion* seleccion_nacional;
    Nodo* nodo;

  public:
    Nodo(Seleccion*);
    Seleccion* getSeleccion();
    Nodo* getNodo();
    void setSeleccion(Seleccion*);
    void setNodo(Nodo*);



};
#endif
