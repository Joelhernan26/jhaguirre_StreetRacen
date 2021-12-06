#ifndef JUEGO_H
#define JUEGO_H
#include "Auto.h"
#include "Auto3.h"
#include "Auto2.h"
#include "Auto1.h"
#include "Borde2.h"
#include "Obstaculo.h"


class Juego{

	
protected:
	
	int teclas[2];
	AutoJugador *autojugador;
	Auto2 *auto2;
	Auto3 *auto3;
	Obstaculo *obs;
	Borde1 *bor1; 
	Borde2 *bor2;
	int posiIni; 
	
	

	
public:
	
	Juego();
	int getposicionInicial(){return posiIni = rand()% 65 + 40;};
	int checkCollision(); 
	void Puntaje(); 
	void Mensaje();
	void play();
	
};


#endif

