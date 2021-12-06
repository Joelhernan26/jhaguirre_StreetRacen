#ifndef BORDE1_H
#define BORDE1_H
#include "Auto.h"

//CLASE HIJA 5 DE AUTO Y MADRE DE BORDE2 
class Borde1 : public Auto {
	
protected:
	int matriz[2][50];
	int color[2][50];
	int colorBarra; 
	
public:
	Borde1(int x0,int y0);
	Borde1(){};
	void dibujar();
};

#endif

