main:    main.cpp Seleccion.o Nodo.o lista.o
	g++ main.cpp Seleccion.o Nodo.o lista.o -o main
main.o:	main.cpp Seleccion.h Nodo.h lista.h
	g++ -c main.cpp
Seleccion:	Seleccion.cpp Seleccion.h
	g++ -c Seleccion.cppNodo:	Nodo.cpp Nodo.h
	g++ -c Nodo.cpp
lista:	lista.cpp lista.h
	g++ -c lista.cpp
clean:
	rm  *.o main 