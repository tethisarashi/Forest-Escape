#pragma once
#include "Feld.h"
class cSeeFeld :  public cFeld
{
public:
	void m_acNameF();
	char acoptionen[4] = { 's', 'b', 'f', 'l' };
	void FeldPrint();
};

