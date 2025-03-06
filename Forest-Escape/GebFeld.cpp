#include <stdio.h>
#include "GebFeld.h"
void cGebFeld::m_acNameF()
{
	printf("Dichtes Gebuesch");
}
void cGebFeld::FeldPrint()
{
	printf("\n------------------------------");
	printf("\n|^                          ^|");
	printf("\n|^^                        ^^|");
	printf("\n|^^^                      ^^^|");
	printf("\n|^^^^ x               X x^^^^|");
	printf("\n|^^^x^  X       x x X   ^X^^^|");
	printf("\n|^^^^^X  x    x     xx X^^^^^|");
	printf("\n|^^^^^^ xxX  XX   xX  ^^^^^^^|");
	printf("\n|^xx^XX^xXxxxXxXXxxXxx^^x^^^^|");
	printf("\n|XxxXXxxXxxXXxxxXXxxxxxxxxxXx|");
	printf("\n------------------------------\n");
}