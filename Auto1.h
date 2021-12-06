#ifndef AUTO1_H
#define AUTO1_H
#include "Auto.h"

//CLASE HIJA 1
class AutoJugador : public Auto{
	
	
public:
	
	AutoJugador(int x0,int y0);
	AutoJugador(){};
	void update();

};

#endif
