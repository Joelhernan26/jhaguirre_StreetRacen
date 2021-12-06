#ifndef AUTO2_H
#define AUTO2_H
#include "Auto.h"

//CLASE HIJA 2
class Auto2 : public Auto{	
		
protected:
	int cD;
	int vel1;
	int puntoA2;
	
	
public:
	 
	Auto2( int v, int x0,int y0);
	Auto2(){};
	void update();
	int cambioDireccion(); 
	int getPuntajeA2(){return puntoA2;};
	void setVel(int);
	
	
	
	
};


#endif

