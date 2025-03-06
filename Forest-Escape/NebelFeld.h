#pragma once
#include "Feld.h"
class cNebelFeld : public cFeld
{
public:
	void m_acNameF();
	char acoptionen[4] = { 'h', 'w', 'l', 'f' };
	void FeldPrint();
};

