#include "Borde1.h"
#include <iostream> 
using namespace std;

Borde1::Borde1( int x0,int y0){
	//color verde
	colorBarra = 10;
	
	//Barra 1
	matriz[0][0]=124;  color[0][0] = colorBarra; 
	matriz[0][1]=124;  color[0][1] = colorBarra;
	matriz[0][2]=124;  color[0][2] = colorBarra;
	matriz[0][3]=124;  color[0][3] = colorBarra;
	matriz[0][4]=124;  color[0][4] = colorBarra;
	matriz[0][5]=124;  color[0][5] = colorBarra;
	matriz[0][6]=124;  color[0][6] = colorBarra;
	matriz[0][7]=124;  color[0][7] = colorBarra;
	matriz[0][8]=124;  color[0][8] = colorBarra;
	matriz[0][9]=124;  color[0][9] = colorBarra;
	matriz[0][10]=124; color[0][10] = colorBarra;
	matriz[0][11]=124; color[0][11] = colorBarra;
	matriz[0][12]=124; color[0][12] = colorBarra;
	matriz[0][13]=124; color[0][13] = colorBarra;
	matriz[0][14]=124; color[0][14] = colorBarra;
	matriz[0][15]=124; color[0][15] = colorBarra;
	matriz[0][16]=124; color[0][16] = colorBarra;
	matriz[0][17]=124; color[0][17] = colorBarra;
	matriz[0][18]=124; color[0][18] = colorBarra;
	matriz[0][19]=124; color[0][19] = colorBarra;
	matriz[0][20]=124; color[0][20] = colorBarra;
	matriz[0][21]=124; color[0][21] = colorBarra;
	matriz[0][22]=124; color[0][22] = colorBarra;
	matriz[0][23]=124; color[0][23] = colorBarra;
	matriz[0][24]=124; color[0][24] = colorBarra;
	matriz[0][25]=124; color[0][25] = colorBarra;
	matriz[0][26]=124; color[0][26] = colorBarra;
	matriz[0][27]=124; color[0][27] = colorBarra;
	matriz[0][28]=124; color[0][28] = colorBarra;
	matriz[0][29]=124; color[0][29] = colorBarra;
	matriz[0][30]=124; color[0][30] = colorBarra;
	matriz[0][31]=124; color[0][31] = colorBarra;
	matriz[0][32]=124; color[0][32] = colorBarra;
	matriz[0][33]=124; color[0][33] = colorBarra;
	matriz[0][34]=124; color[0][34] = colorBarra;
	matriz[0][35]=124; color[0][35] = colorBarra;
	matriz[0][36]=124; color[0][36] = colorBarra;
	matriz[0][37]=124; color[0][37] = colorBarra;
	matriz[0][38]=124; color[0][38] = colorBarra;
	matriz[0][39]=124; color[0][39] = colorBarra;
	matriz[0][40]=124; color[0][40] = colorBarra;
	matriz[0][41]=124; color[0][41] = colorBarra;
	matriz[0][42]=124; color[0][42] = colorBarra;
	matriz[0][43]=124; color[0][43] = colorBarra;
	matriz[0][44]=124; color[0][44] = colorBarra;
	matriz[0][45]=124; color[0][45] = colorBarra;
	matriz[0][46]=124; color[0][46] = colorBarra;
	matriz[0][47]=124; color[0][47] = colorBarra;
	matriz[0][48]=124; color[0][48] = colorBarra;
	matriz[0][49]=124; color[0][49] = colorBarra;
	//barra 2
	matriz[1][0]=124;  color[1][0] = colorBarra;
	matriz[1][1]=124;  color[1][1] = colorBarra;
	matriz[1][2]=124;  color[1][2] = colorBarra;
	matriz[1][3]=124;  color[1][3] = colorBarra;
	matriz[1][4]=124;  color[1][4] = colorBarra;
	matriz[1][5]=124;  color[1][5] = colorBarra;
	matriz[1][6]=124;  color[1][6] = colorBarra;
	matriz[1][7]=124;  color[1][7] = colorBarra;
	matriz[1][8]=124;  color[1][8] = colorBarra;
	matriz[1][9]=124;  color[1][9] = colorBarra;
	matriz[1][10]=124; color[1][10] = colorBarra;
	matriz[1][11]=124; color[1][11] = colorBarra;
	matriz[1][12]=124; color[1][12] = colorBarra;
	matriz[1][13]=124; color[1][13] = colorBarra;
	matriz[1][14]=124; color[1][14] = colorBarra;
	matriz[1][15]=124; color[1][15] = colorBarra;
	matriz[1][16]=124; color[1][16] = colorBarra;
	matriz[1][17]=124; color[1][17] = colorBarra;
	matriz[1][18]=124; color[1][18] = colorBarra;
	matriz[1][19]=124; color[1][19] = colorBarra;
	matriz[1][20]=124; color[1][20] = colorBarra;
	matriz[1][21]=124; color[1][21] = colorBarra;
	matriz[1][22]=124; color[1][22] = colorBarra;
	matriz[1][23]=124; color[1][23] = colorBarra;
	matriz[1][24]=124; color[1][24] = colorBarra;
	matriz[1][25]=124; color[1][25] = colorBarra;
	matriz[1][26]=124; color[1][26] = colorBarra;
	matriz[1][27]=124; color[1][27] = colorBarra;
	matriz[1][28]=124; color[1][28] = colorBarra;
	matriz[1][29]=124; color[1][29] = colorBarra;
	matriz[1][30]=124; color[1][30] = colorBarra;
	matriz[1][31]=124; color[1][31] = colorBarra;
	matriz[1][32]=124; color[1][32] = colorBarra;
	matriz[1][33]=124; color[1][33] = colorBarra;
	matriz[1][34]=124; color[1][34] = colorBarra;
	matriz[1][35]=124; color[1][35] = colorBarra;
	matriz[1][36]=124; color[1][36] = colorBarra;
	matriz[1][37]=124; color[1][37] = colorBarra;
	matriz[1][38]=124; color[1][38] = colorBarra;
	matriz[1][39]=124; color[1][39] = colorBarra;
	matriz[1][40]=124; color[1][40] = colorBarra;
	matriz[1][41]=124; color[1][41] = colorBarra;
	matriz[1][42]=124; color[1][42] = colorBarra;
	matriz[1][43]=124; color[1][43] = colorBarra;
	matriz[1][44]=124; color[1][44] = colorBarra;
	matriz[1][45]=124; color[1][45] = colorBarra;
	matriz[1][46]=124; color[1][46] = colorBarra;
	matriz[1][47]=124; color[1][47] = colorBarra;
	matriz[1][48]=124; color[1][48] = colorBarra;
	matriz[1][49]=124; color[1][49] = colorBarra;
	
	//Datos utilizados para el armado del modelo y la posicion de las barreras
	ancho = 2;
	alto = 49;
	x = x0;
	y = y0;
	
	//dibuja
	dibujar();
}
//METODO DIBUJAR
void Borde1::dibujar(){
	
	for (int i= 0; i<ancho; i++){
		for (int k= 0; k<alto; k++){
			textcolor(color[i][k]);
			gotoxy(x+i,y+k);
			cout<<(char) matriz[i][k];
		}
	}
}


