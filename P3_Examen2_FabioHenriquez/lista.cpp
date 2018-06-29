#include "lista.h"
#include "Nodo.h"
#include "Seleccion.h"

lista::lista(){

}

void lista::agregar(Nodo* n){
    if(siguiente==NULL){
        siguiente=n;
    }else{
        Nodo* temp = siguiente;
        while(temp->getNodo() != NULL){
            temp = temp->getNodo();
        }
        temp->setNodo(n);
    }
}

void lista::imprimir(int c){
    int senuelo = 0;
    while(senuelo<c){
        cout<<"Nombre del equipo: "<<siguiente->getSeleccion()->getNombre()<<endl;
        cout<<"Partidos Ganados: "<<siguiente->getSeleccion()->getPartidosGanados()<<endl;
        cout<<"Partidos Perdidos: "<<siguiente->getSeleccion()->getPartidosPerdidos()<<endl;
        cout<<"Partidos Empatados: "<<siguiente->getSeleccion()->getPartidosEmpatados()<<endl;
        cout<<"Goles anotados: "<<siguiente->getSeleccion()->getGolesAnotados()<<endl;
        cout<<"Nombre del maximo Goleador: "<<siguiente->getSeleccion()->getMaximoGoleador()<<endl;
        cout<<"Goles del maximo Goleador: "<<siguiente->getSeleccion()->getGolesJugador()<<endl;
        
        cout<<endl;
        senuelo++;
    }
}


