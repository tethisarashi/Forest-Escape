#pragma once
#include "Feld.h"

class cDunklesFeld : public cFeld
{
public:
	void m_acNameF();
	char acoptionen[4] = { 'b', 'd', 'l', 'f' };
	void FeldPrint();
};

