#ifndef PIEDRA_H
#define PIEDRA_H
#include "Auto.h"

//CLASE HIJA 4
class Obstaculo : public Auto {

private: 
	int colorObstaculo; 
	int vel1;
	int puntObs;
	
public:
	 
	Obstaculo(int v, int x0,int y0);
	Obstaculo(){};
	int update();
	int getPuntajeObs(){return puntObs;};
	void setVel(int);
	
	
	
};

#endif

