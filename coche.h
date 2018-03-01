#ifndef COCHE
#define COCHE

#include <list>
#include "coordenadas.hpp"

using namespace std;
const int MAX=1000;

class coche{

private:
	int filaActual;
	int columActual;
	//-------------
	int numRides;
	coordenadas orden[MAX];
	

public:
	coche::coche(){
		filaActual=0;
		columActual=0;
		numRides=0;
		indice=0;
	}
	coche::void nuevoTrayecto(coordenadas c){
		orden[numRides]=c;
		numRides++;
		dameCoord(filaActual, columActual);
		
	}
	coche::int dameRides(){
		return numRides;
	}

	coche::int coordActual(int &x, int&y){
		x=filaActual;
		y=columActual;
	}
};


#endif
