#include "Auto.h"
#include <iostream>

using namespace std;


Auto::Auto(){};	


//METODO DIBUJAR
void Auto::dibujar(){
	
	for (int i= 0; i<ancho; i++){
		for (int k= 0; k<alto; k++){
			textcolor(color[i][k]);
			gotoxy(x+i,y+k);
			cout<<(char) matriz[i][k];
		}
	}
}

//METODO BORRAR
void Auto::borrar(){
	
	for (int i= 0; i<ancho+1; i++){
		for (int k= 0; k<alto+1; k++){
			textcolor(color[i][k]);	
			gotoxy(x+i,y+k);
			cout<<" ";
		}
	}
}
//ASIGNA LIMITE EN X. EJ: AUTOS, OBSTACULO, ETC.  
void Auto::setLimit(int x0, int x1){
	maxLimitX = x1;
	minLimitX = x0;

}


