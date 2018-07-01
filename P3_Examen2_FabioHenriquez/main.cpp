#include <iostream>
#include <string>
#include "Seleccion.h"
#include "Nodo.h"
#include "lista.h"
#include <fstream>


using namespace std;

int menu();
void estadisticas();

int main(){
    int senuelo=0;
    //Seleccion* sele;
    //Seleccion* s_nacional = new Seleccion();
    Seleccion* s_n;
    Nodo* nodo;
    lista* lista_selecciones;
    int op=0;
    string nombre=" ";
    int partidos_ganados=0; 
    int partidos_perdidos=0; 
    int empatados=0;
    int goles_anotados=0;
    string maximo_goleador=" ";
    int jugador_goles=0;
     ofstream out ("Archivo_Seleccion.dat", ios::out | ios::binary | ios::app);
    char res ='s';
    do{
    switch(menu()){
        case 1:
            cout<<"[1] Agregar una Seleccion y Guardar Archivo"<<endl;
            cout<<"[2] Modificar una Seleccion // aun no"<<endl;
            cout<<"[3] Eliminar una Seleccion // aun no"<<endl;
            cout<<"--------------------------"<<endl;    
            cout<<"[4] Listar Selecciones "<<endl;
            cin>>op;
            switch(op){
                    case 1:
                    cout<<"Ingrese el nombre de la seleccion"<<endl;
                    cin>>nombre;
                    cout<<"Ingrese la cantidad de partidos ganados"<<endl;
                    cin>>partidos_ganados;
                    cout<<"Ingrese la cantidad de partidos perdidos"<<endl;
                    cin>>partidos_perdidos;
                    cout<<"Ingrese la cantidad de partidos empatados"<<endl;
                    cin>>empatados;
                    cout<<"Ingrese la cantidad de goles anotados"<<endl;
                    cin>>goles_anotados;
                    cout<<"Ingrese el nombre del maximo goleador"<<endl;
                    cin>>maximo_goleador;
                    cout<<"Ingrese la cantidad de goles anotados del maximo goleador"<<endl;
                    cin>>jugador_goles;
                    s_n =  new Seleccion(nombre,partidos_ganados,partidos_perdidos,empatados,goles_anotados,maximo_goleador,jugador_goles);
                    nodo = new Nodo(s_n);
                    lista_selecciones = new lista();
                    lista_selecciones->agregar(nodo);
                    senuelo++;
                    //cout<<"PROBANDOOOO"<<endl;
                    cout<<"Escribiendo Archivo..."<<endl;
                    s_n->write(out);
                    cout<<"Guardado con exito"<<endl;
                    //cout<<"fin de prueba"<<endl
                    cout<<endl;
                    out.close();

                    break;//fin del case 1 de agregar
          
                    case 2:
                    break;

                    case 3:

                    break;
                    case 4:
                        cout<<endl;
                        lista_selecciones->imprimir(senuelo);
                    break;
            }//fin del swicth de administracion
        break;
    }
    cout<<endl;
    cout<<"Desea continuar[s/n]"<<endl;
    cin>>res;
    }while(res=='S' || res=='s');
return 0;
}

int menu(){
    int opcion=0;
    cout<<"MENU"<<endl;
    cout<<"-----"<<endl;
    cout<<"[1] Administracion e Imprimir"<<endl;
    //cout<<"[2] Estadisticas"<<endl;
    cout<<"--------------------"<<endl;
    cin>>opcion;
    return opcion;
}



/*void estadisticas(){
    int opp=0;
    cout<<"[1] Imprimir "<<endl;
    cout<<"--------------------------"<<endl;    
    cin>>opp;
    switch(opp){
        case 1:
            
           // lista_selecciones->imprimir(senuelo);
        break;
        case 2:

        break;

    }

}*/


