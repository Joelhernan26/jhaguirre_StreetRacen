#include "Auto3.h"

using namespace std;


// CONSTRUCTOR
Auto3::Auto3(int vel, int x0, int y0){
	
	vel1 = vel; //ayuda a marcar la velocidad y modificarla según la canticad de puntos y los niveles.   
	velocidad = vel; //velocidad del movimiento
	paso=CLOCKS_PER_SEC/velocidad; //fps
	tempo=clock(); //inicializamos tempo con el reloj
	colorAuto = 14; //color auto3 AMARILLO
	puntoA3 = 0; //puntos
	
	//DIBUJO DEL MODELO
	matriz[0][0]=0;   color[0][0] = colorAuto;
	matriz[0][1]=219; color[0][1] = colorAuto;
	matriz[0][2]=0;   color[0][2] = colorAuto;
	matriz[0][3]=219; color[0][3] = colorAuto;
	matriz[1][0]=0;   color[1][0] = colorAuto;
	matriz[1][1]=61;  color[1][1] = colorAuto;
	matriz[1][2]=47;  color[1][2] = colorAuto;
	matriz[1][3]=61;  color[1][3] = colorAuto;
	matriz[2][0]=30;  color[2][0] = colorAuto;
	matriz[2][1]=61;  color[2][1] = colorAuto;
	matriz[2][2]=0;   color[2][2] = colorAuto;
	matriz[2][3]=61;  color[2][3] = colorAuto;
	matriz[3][0]=0;   color[3][0] = colorAuto;
	matriz[3][1]=61;  color[3][1] = colorAuto;
	matriz[3][2]=92;  color[3][2] = colorAuto;
	matriz[3][3]=61;  color[3][3] = colorAuto;
	matriz[4][0]=0;   color[4][0] = colorAuto;
	matriz[4][1]=219; color[4][1] = colorAuto;
	matriz[4][2]=0;   color[4][2] = colorAuto;
	matriz[4][3]=219; color[4][3] = colorAuto;
	
	//datos usados para el movimiento, la posición inicial, el armado del modelo, etc. 
	ancho = 5;
	alto = 4;
	y = y0;
	x = x0;  
	
	//dibuja
	dibujar();

}
//METODO - MOVIMIENTO RECTO POR EL MAPA
void Auto3::update(){
	
		if(tempo+vel1<clock()){
			// borra
			borrar();
			// mueve
			y++;
			if(y==42){
				puntoA3++;
				y=0;
				x = rand()%67+45;
			}
			//dibuja
			dibujar();
			tempo=clock();
		}
}
//MODIFICA VELOCIDAD
void Auto3::setVel(int vel2){
	vel1=vel2;
}







