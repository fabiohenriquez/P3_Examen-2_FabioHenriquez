#include "Nodo.h"

Nodo::Nodo(Seleccion* p){
  seleccion_nacional=p;
}


Seleccion* Nodo::getSeleccion(){
  return seleccion_nacional;
}

Nodo* Nodo::getNodo(){
  return nodo;
}

void Nodo::setSeleccion(Seleccion* s){
  seleccion_nacional = s;
}

void Nodo::setNodo(Nodo* p){
  nodo = p;
}
