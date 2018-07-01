#ifndef SELECCION_H
#define SELECCION_H
#include <iostream>
#include <string>
using namespace std;

class Seleccion{

  public:

    string nombre;
    int partidosGanados;
    int partidosPerdidos;
    int partidosEmpatados;
    int golesAnotados;
    string maximoGoleador;
    int goles_jugador;

    Seleccion();
    Seleccion(string,int,int,int,int,string,int);

    void setNombre(string);
    void setPartidosGanados(int);
    void setPartidosPerdidos(int);
    void setPartidosEmpatados(int);
    void setGolesAnotados(int);
    void setMaximoGoleador(string);
    void setGolesJugador(int);

    string getNombre();
    int getPartidosGanados();
    int getPartidosPerdidos();
    int getPartidosEmpatados();
    int getGolesAnotados();
    string getMaximoGoleador();
    int getGolesJugador();

    //archivo
    void write(ofstream&);

    

   
};
#endif
