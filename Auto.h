#ifndef AUTO_H
#define AUTO_H
#include <conio2.h>
#include <ctime>
#include <windows.h>

//CLASE MADRE
class Auto{
	
protected:
	
	int x;
	int y;
	// hago matrices lo suficientemente grandes
	//ESTRUCTURA VISUAL AUTOS 
	int matriz[5][4];//Autos
	int color[5][4]; // matriz de colores
	//ESTRUCTURA VISUAL CAMINO 
	
	int ancho;
	int alto;
	int pasoX;
	int xFantasma;
	int yFantasma;
	int maxLimitX;
	int minLimitX;
	

	clock_t tempo; //variable para ajustar la velocidad de movimiento de la pelotita
	clock_t paso; //variable para ajustar la velocidad de movimiento de la pelotita
	int velocidad;
	int colorAuto;
	int colorBarra;
	 
public:
	//DIBUJAN Y BORRAN AUTO Y OBSTACULOS
	void dibujar();
	void borrar(); 
	//POSICIONAN AUTOS
	void setLimit(int, int);
	int getX(){return x;}
	int getY(){return y;}
	Auto();

};

#endif

