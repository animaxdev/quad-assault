#ifndef IGRA_H
#define IGRA_H
#include "Ovisnosti.h"
#include "Stanje.h"

class Igra
{
private:
	sf::RenderWindow rw;		

	GLfloat sirina, visina;

	bool gotovo;

	vector<Stanje*> stanja;	
public:		
	bool Init(char* configFile); //inicijalizira igru, koristi informacije iz vanjskog config filea.
	void Loop(); //odvija se svaki frame, a�urira trenutni state i iscrtava sadr�aj
	void Izlaz(); //osloba�a memoriju i izlazi iz programa

	int Rand(int i1, int i2);

	void DodajStanje(Stanje* stanje, bool unisti_trenutno);

	sf::RenderWindow* DajRW();
};

#endif