#include "Juego.h"
#include <iostream>

using namespace std;
//GESTIÓN DE TODO EL JUEGO

Juego::Juego(){
	
	//posiciones de los bordes 
	bor1 = new Borde1(37,0);
	bor2 = new Borde2(116,0);
	
	//Posiciones y velocidad inicial de autos y obstaculo. 
	autojugador = new AutoJugador(75,40);
	autojugador->setLimit(37,113);
	obs = new Obstaculo(115,getposicionInicial(),0);
	obs->setLimit(37,113);
	auto2 = new Auto2(100,getposicionInicial(),0);
	auto2->setLimit(37,113);
	auto3 = new Auto3(175,getposicionInicial(),0);
	auto3->setLimit(37,113);
			
}
//CONTROL DE COLISIONES
int Juego::checkCollision(){
	
	int x1 = autojugador->getX();
	int y1 = autojugador->getY();

	int x2 = auto2->getX();
	int y2 = auto2->getY();
	
	int x3 = auto3->getX();
	int y3 = auto3->getY();
	
	int x4 = obs->getX();
	int y4 = obs->getY();
	
	int ancho = 5;
	int alto = 4;
	
	
	
		if(x1 > (x2 - ancho) && x1 < (x2 + ancho) && 
		y1 > (y2 - alto) && y1 < (y2 + alto)){
		return 2;
		}
		if(x1 > (x3 - ancho) && x1 < (x3 + ancho) && 
		y1 > (y3 - alto) && y1 < (y3 + alto)){
		return 3;
		}
		if(x1 > (x4 - ancho) && x1 < (x4 + ancho) && 
		y1 > (y4 - alto) && y1 < (y4 + alto)){
		return 4;
		}
	   
	   
	return 0;
}
//METODO QUE CONTROLA EL FINAL DEL JUEGO POR COLISIÓN 
void Juego::play(){
	Mensaje();
	bool control = true; 
	while(control){
		if (_kbhit()){
			int tecla = getch();
			if(tecla==13){
				bool flag = true;
				while(flag) {
					Puntaje();
					autojugador->update();
					auto2->update();
					auto3->update();
					obs->update();
					
					if (checkCollision() == 2){
						flag = false; 
						control = false;
					}
					if (checkCollision() == 3){
						flag = false;
						control = false;
					}	
					if (checkCollision() == 4){
						flag = false;
						control = false;
					}
				} 
			}
		}
	}	
}
//MENSAJE DE INICIO
void Juego::Mensaje(){
	gotoxy(2,1);
	cout<<"Hola, bienvenido." <<endl;
	cout<<" MAXIMIZA la PANTALLA para jugar "<<endl<<" CORRECTAMENTE."<<endl; 
	cout<<" Luego presiona ENTER para COMENZAR"<<endl;
	cout<<" Mueves con flechas:"<<endl<<" Izquierda (<=) y Derecha (=>)."<<endl;  
	cout<<" OBJETIVO: esquivar los AUTOS."<<endl<<" para sumar PUNTOS."<<endl; 
	cout<<" DIFUCULTAD: cada 20 pts. subes un"<<endl<<" NIVEL y aumentas la VELOCIDAD."<<endl; 
	cout<<" Seras capas de llegar al"<<endl<<" NIVEL IMPOSIBLE???."<<endl; 
}
//CONTROL DEL PUNTAJE, NIVEL Y LAS VELOCIDADES DE LOS AUTOS. 
void Juego::Puntaje(){
	int total = auto2->getPuntajeA2()+auto3->getPuntajeA3()+obs->getPuntajeObs();
	gotoxy(120,10);
	cout<<"PUNTOS: "<<total; 
	
	switch(total){
		case 0:
			gotoxy(120,11);
			cout<<"NIVEL: 1";
			break; 
		case 20:
			gotoxy(120,11);
			cout<<"NIVEL: 2";
			auto2->setVel(80);
			auto3->setVel(110);
			obs->setVel(95);
			break;
		case 40:
			gotoxy(120,11);
			cout<<"NIVEL: 3";
			auto2->setVel(75);
			auto3->setVel(105);
			obs->setVel(90);
			break;
		case 60:
			gotoxy(120,11);
			cout<<"NIVEL: 4";
			auto2->setVel(70);
			auto3->setVel(100);
			obs->setVel(85);
			break;
		case 80:
			gotoxy(120,11);
			cout<<"NIVEL: 5";
			auto2->setVel(65);
			auto3->setVel(95);
			obs->setVel(80);
			break;
		case 100:
			gotoxy(120,11);
			cout<<"NIVEL: 6";
			auto2->setVel(60);
			auto3->setVel(90);
			obs->setVel(75);
			break;
		case 120:
			gotoxy(120,11);
			cout<<"NIVEL: 7";
			auto2->setVel(55);
			auto3->setVel(85);
			obs->setVel(70);
			break;
		case 140:
			gotoxy(120,11);
			cout<<"NIVEL: 8";
			auto2->setVel(50);
			auto3->setVel(80);
			obs->setVel(65);
			break;
		case 160:
			gotoxy(120,11);
			cout<<"NIVEL: 9";
			auto2->setVel(45);
			auto3->setVel(75);
			obs->setVel(60);
			break;
		case 180:
			gotoxy(120,11);
			cout<<"NIVEL: 10";
			auto2->setVel(40);
			auto3->setVel(70);
			obs->setVel(55);
			break;
		case 200:
			gotoxy(120,11);
			cout<<"NIVEL: 11";
			auto2->setVel(35);
			auto3->setVel(65);
			obs->setVel(50);
			break;
		case 220:
			gotoxy(120,11);
			cout<<"NIVEL: 12";
			auto2->setVel(30);
			auto3->setVel(60);
			obs->setVel(45);
			break;
		case 240:
			gotoxy(120,11);
			cout<<"NIVEL: 13";
			auto2->setVel(25);
			auto3->setVel(55);
			obs->setVel(40);
			break;
		case 260:
			gotoxy(120,11);
			cout<<"NIVEL: 14";
			auto2->setVel(20);
			auto3->setVel(50);
			obs->setVel(35);
			break;
		case 280:
			gotoxy(120,11);
			cout<<"NIVEL: 15";
			auto2->setVel(15);
			auto3->setVel(45);
			obs->setVel(30);
			break;
		case 300:
			gotoxy(120,11);
			cout<<"NIVEL: 16";
			auto2->setVel(10);
			auto3->setVel(40);
			obs->setVel(25);
			break;
		case 320:
			gotoxy(120,11);
			cout<<"NIVEL: 17";
			auto2->setVel(7);
			auto3->setVel(35);
			obs->setVel(20);
			break;
		case 340:
			gotoxy(120,11);
			cout<<"NIVEL IMPOSIBLE";
			auto2->setVel(5);
			auto3->setVel(30);
			obs->setVel(15);
			break;
	}
}


