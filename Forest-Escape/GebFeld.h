#pragma once
#include "Feld.h"
class cGebFeld : public cFeld
{
public:
	void m_acNameF();
	char acoptionen[4] = { 'd', 'w', 'l', 'f' };
	void FeldPrint();
};

