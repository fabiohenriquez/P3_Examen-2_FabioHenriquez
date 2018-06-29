#include "Seleccion.h"
#include <fstream>
#include <iostream>

using namespace std;

Seleccion::Seleccion(string nombre, int partidosGanados, int partidosPerdidos, int partidosEmpatados, int golesAnotados, string maximoGoleador, int goles_jugador){
  this->nombre = nombre;
  this->partidosGanados = partidosGanados;
  this->partidosPerdidos = partidosPerdidos;
  this->partidosEmpatados = partidosEmpatados;
  this->golesAnotados = golesAnotados;
  this->maximoGoleador = maximoGoleador;
  this->goles_jugador = goles_jugador;
}

void Seleccion::setNombre(string nombre){
  this->nombre = nombre;
}

void Seleccion::setPartidosGanados(int partidosGanados){
  this->partidosGanados = partidosGanados;
}

void Seleccion::setPartidosPerdidos(int partidosPerdidos){
  this->partidosPerdidos = partidosPerdidos;
}

void Seleccion::setPartidosEmpatados(int partidosEmpatados){
  this->partidosEmpatados = partidosEmpatados;
}

void Seleccion::setGolesAnotados(int golesAnotados){
  this->golesAnotados = golesAnotados;
}

void Seleccion::setMaximoGoleador(string maximoGoleador){
  this->maximoGoleador = maximoGoleador;
}

void Seleccion::setGolesJugador(int goles_jugador){
  this->goles_jugador = goles_jugador;
}

string Seleccion::getNombre(){
  return nombre;
}

int Seleccion::getPartidosGanados(){
  return partidosGanados;
}

int Seleccion::getPartidosPerdidos(){
  return partidosPerdidos;
}

int Seleccion::getPartidosEmpatados(){
  return partidosEmpatados;
}

int Seleccion::getGolesAnotados(){
  return golesAnotados;
}

string Seleccion::getMaximoGoleador(){
  return maximoGoleador;
}

int Seleccion::getGolesJugador(){
  return goles_jugador;
}
