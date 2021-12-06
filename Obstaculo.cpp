#include "Obstaculo.h"

using namespace std;

Obstaculo::Obstaculo(int vel, int x0, int y0) {
	
	vel1 = vel; //ayuda a marcar la velocidad y modificarla según la canticad de puntos y los niveles.
	velocidad = vel; //velocidad del movimiento
	paso=CLOCKS_PER_SEC/velocidad; //fps
	tempo=clock(); //inicializamos tempo con el reloj
	colorObstaculo = 11; //color obstaculo CELESTE
	puntObs=0; //puntos
	
	//DIBUJO DEL MODELO
	matriz[4][0]=124; color[4][0] = colorObstaculo;
	matriz[4][1]=124; color[4][1] = colorObstaculo;
	matriz[4][2]=124; color[4][2] = colorObstaculo;
	matriz[4][3]=124; color[4][3] = colorObstaculo;
	
	matriz[3][0]=196; color[1][0] = colorObstaculo;
	matriz[3][1]=79;  color[1][1] = colorObstaculo;
	matriz[3][2]=79;  color[1][2] = colorObstaculo;
	matriz[3][3]=196; color[1][3] = colorObstaculo;
	
	matriz[2][0]=196; color[2][0] = colorObstaculo;
	matriz[2][1]=79;  color[2][1] = colorObstaculo;
	matriz[2][2]=79;  color[2][2] = colorObstaculo;
	matriz[2][3]=196; color[2][3] = colorObstaculo;
	
	matriz[1][0]=196; color[3][0] = colorObstaculo;
	matriz[1][1]=79;  color[3][1] = colorObstaculo;
	matriz[1][2]=79;  color[3][2] = colorObstaculo;
	matriz[1][3]=196; color[3][3] = colorObstaculo;
	
	matriz[0][0]=124;  color[0][0] = colorObstaculo;
	matriz[0][1]=124; color[0][1] = colorObstaculo;
	matriz[0][2]=124; color[0][2] = colorObstaculo;
	matriz[0][3]=124; color[0][3] = colorObstaculo;
	
	//datos usados para el movimiento, la posición inicial, el armado del modelo, etc. 	
	ancho = 5;
	alto = 4;
	y = y0;
	x = x0;  
	
	//dibuja
	dibujar();
}
//METODO - MOVIMIENTO RECTO POR EL MAPA
int Obstaculo::update(){

		if(tempo+vel1<clock()){
			
			//borra
			borrar();
			//mueve
			y++;
			if(y==42){
				puntObs++;
				y=0;
				x = rand()%65+40;
			}
			//dibuja
			dibujar();
			tempo=clock();
			
		}
}
//MODIFICA VELOCIDAD
void Obstaculo::setVel(int vel2){
	vel1=vel2;
}


