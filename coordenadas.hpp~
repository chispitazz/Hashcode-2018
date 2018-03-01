#ifndef COODERNADAS
#define COORDENADAS

#include <stdlib.h>

struct coordenadas{
	
private:
	int a; 	//row start
	int b;	//column start
	int x;	//row finish
	int y;	//column finish
	int s;	//earliest start
	int f;	//latest finish
	int distancia;
	//------
	int id;

public:
	friend coordenadas crear(int id1, int a1, int b1, int x1,int y1, int s1, int f){
		coordenadas hola;
		hola.a=a1;
		hola.b=b1;
		hola.x=x1;
		hola.y=y1;
		hola.s=s1;
		hola.f=f1;
		hola.id=id1;
		hola.distancia=abs(x1-a1)+abs(y1-b1);
		return hola;
	}
	friend int distancia(coordenadas c, int fila, int columna){
		return abs(c.a-fila)+abs(c.b-columna);
	}
	friend int dameID(coordenadas c){
		return c.id;
	}
	friend int damedistancia(coordenadas c){
		return c.distancia;
	}
};

#endif
