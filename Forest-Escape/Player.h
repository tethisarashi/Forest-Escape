#pragma once
#include "Feld.h"
#include "FeldPosition.h"
class cPlayer : cFeld
{
public:
	char cNameP[100];
	bool istLebendig = true;
	bool istinWald = true;
	bool hatSchwert = true;
	bool hatGegenmittel = false;
	bool hatHeilung = false;
	bool istVergiftet = false;
	bool istVerletzt = false;
	bool istInfiziert = false;
	bool hatLiebe = false;
	bool hatILiebe = false;

	void step(cFeldPosition);
};

