#pragma once
#include "Feld.h"

class cHellesFeld : public cFeld
{
public:
	void m_acNameF();
	char acoptionen[4] = { 'h', 's', 'f', 'l' };
	void FeldPrint();
};

