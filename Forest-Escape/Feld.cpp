#include <stdio.h>
#include <string.h>
#include <iostream>
#include "Feld.h"
char cFeld::waehle()
{
	
	int gewaehlt;
	gewaehlt = rand() % 3 + 0;
	return acoptionen[gewaehlt];
	
}


