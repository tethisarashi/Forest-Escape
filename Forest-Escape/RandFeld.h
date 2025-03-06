#pragma once
#include "Feld.h"
class cRandFeld : public cFeld
{
public:
	void m_acNameF();
	char acoptionen[4] = { 'a', 'a', 'a', 'a' };
	void FeldPrint();
};

