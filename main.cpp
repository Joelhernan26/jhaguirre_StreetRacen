#include "Juego.h"

using namespace std;

int main(int argc, char *argv[]) {
	
	srand(time(NULL));
	Juego *J;
	J= new Juego();
	J->play();
		
	return 0;
}

