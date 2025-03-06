#include <stdio.h>
#include "DunklesFeld.h"
void cDunklesFeld::m_acNameF()
{
	printf("Dunkles Feld");
}

void cDunklesFeld::FeldPrint()
{
	printf("\n------------------------------");
	printf("\n|     ^       ^      ^       |");
	printf("\n|    ^^^     ^^^    ^^^      |");
	printf("\n|   ^^^^^   ^^^^^  ^^^^^     |");
	printf("\n|  ^^^^^^^ ^^^^^^ ^^^^^^^    |");
	printf("\n| ^^^^^^^^^ ^^^^ ^^^^^^^^^   |");
	printf("\n| ^^^^^^^^^ ^^^^ ^^^^^^^^^   |");
	printf("\n| ^^^^^^^^^^ ^ ^^^^^^^^^^^^  |");
	printf("\n| ^^^^^^^^^^^ ^^^^^^^^^^^^^^ |");
	printf("\n|    | |    | |     | |      |");
	printf("\n------------------------------\n");
}