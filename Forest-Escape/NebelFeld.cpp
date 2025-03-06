#include <stdio.h>
#include "NebelFeld.h"
void cNebelFeld::m_acNameF()
{
	printf("Dichter Nebel");
}
void cNebelFeld::FeldPrint()
{
	printf("\n------------------------------");
	printf("\n| ~~~~^~~~~~~~^~~~~~~^~~~~~~~|");
	printf("\n|  ~ ^~^  ~  ^~^~~  ^^^   ~~ |");
	printf("\n|   ^^^^^ ~~^~^^^~~^^^^^~~~  |");
	printf("\n| ~^~^^^^^ ^^^~~~~^^^~~~^~~ ~|");
	printf("\n| ^^^^~~~^^ ^^^^ ^^^^^^^~^~~ |");
	printf("\n|~^~~^^^~~^ ^^^^ ^~~^^^^^^~~ |");
	printf("\n| ^^^^^^^^^^ ^ ^^^^~~^^^^^^  |");
	printf("\n| ^^^^^^^^^^^ ^^^^^^~~~~^^^^ |");
	printf("\n|~~~|~ | ~ ~| |~ ~~ | | ~~ ~ |");
	printf("\n------------------------------\n");
}