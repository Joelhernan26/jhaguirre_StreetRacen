#include "Auto1.h"

using namespace std;

//CONSTRUCTOR
AutoJugador::AutoJugador(int x0, int y0){
	
	int Color = 1; //color auto1 AZUL 
	
	//DIBUJO DEL MODELO
	matriz[0][0]=0;  color[0][0] = Color;
	matriz[0][1]=219; color[0][1] = Color;
	matriz[0][2]=0; color[0][2] = Color;
	matriz[0][3]=219; color[0][3] = Color;
	
	matriz[1][0]=0;  color[1][0] = Color;
	matriz[1][1]=61; color[1][1] = Color;
	matriz[1][2]=47; color[1][2] = Color;
	matriz[1][3]=61; color[1][3] = Color;
	
	matriz[2][0]=30; color[2][0] = Color;
	matriz[2][1]=61; color[2][1] = Color;
	matriz[2][2]=0;  color[2][2] = Color;
	matriz[2][3]=61; color[2][3] = Color;
	
	matriz[3][0]=0;  color[3][0] = Color;
	matriz[3][1]=61; color[3][1] = Color;
	matriz[3][2]=92; color[3][2] = Color;
	matriz[3][3]=61; color[3][3] = Color;
	
	matriz[4][0]=0;  color[4][0] = Color;
	matriz[4][1]=219; color[4][1] = Color;
	matriz[4][2]=0; color[4][2] = Color;
	matriz[4][3]=219; color[4][3] = Color;
	
	//datos usados para el movimiento, la posición inicial, el armado del modelo, etc. 
	ancho = 5;
	alto = 4;
	pasoX = 4;
	x = x0;
	y = y0;
	
	//dibuja 
	dibujar();
	
}


void AutoJugador::update(){
	
	if (_kbhit()){
		int tecla = getch();
		bool moves = false;
		
		switch(tecla){
		
		case (77):{ // derecha
				if (x + ancho < maxLimitX){
					borrar(); 
					x = x + pasoX+1; 
					moves = true;
				} break;
			}
		case (75):{ //izquierda
				if (x - ancho > minLimitX){
					borrar(); 
					x = x - pasoX-1; 
					moves = true;
				} break;
			}
		}
			
	if(moves) {
		dibujar();
	}
	
}	
	
}



