#include <stdio.h>
#include "SeeFeld.h"
void cSeeFeld::m_acNameF()
{
	printf("Spiegelnder See");
}
void cSeeFeld::FeldPrint()
{
	printf("\n------------------------------");
	printf("\n|^^^^^^^^^^           ^^^^^^^|");
	printf("\n|   | |      ,       ,   | | |");
	printf("\n|                ,        ;  |");
	printf("\n| ;    ;               ;  ;  |");
	printf("\n|     ; ;  _----------_   .  |");
	printf("\n| ; _------    ~~      -----_|");
	printf("\n|---      ~~  *   ~~        *|");
	printf("\n| *     *       ~~~    ~~~   |");
	printf("\n|  ~~~     *        *      ~~|");
	printf("\n------------------------------\n");
}