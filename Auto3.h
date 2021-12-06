#ifndef AUTO3_H
#define AUTO3_H
#include "Auto.h"

//CLASE HIJA 3
class Auto3 : public Auto {
	
protected:
	int vel1;
	int puntoA3; 
	
public:
	
	Auto3(int v, int x0,int y0);
	Auto3(){};
	void update();
	int getPuntajeA3(){return puntoA3;};
	void setVel(int);
	
	
};


#endif

