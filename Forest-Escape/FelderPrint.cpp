#include <stdio.h>
#include "FelderPrint.h"
void cFelderPrint::FeldDunkel()
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

void cFelderPrint::FeldHell()
{
	printf("\n------------------------------");
	printf("\n|^                          ^|");
	printf("\n|^^                        ^^|");
	printf("\n|^^^                      ^^^|");
	printf("\n|^^^^                    ^^^^|");
	printf("\n|^^^^^                  ^^^^^|");
	printf("\n|^^^^^                  ^^^^^|");
	printf("\n|^^^^^^               ^^^^^^^|");
	printf("\n|^^^^^^^             ^^^^^^^^|");
	printf("\n| |...,.,,.,..,..,..,.,.,..| |");
	printf("\n------------------------------\n");
}

void cFelderPrint::FeldNebel()
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

void cFelderPrint::FeldGeb()
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

void cFelderPrint::FeldSee()
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

void cFelderPrint::FeldRand()
{
	printf("\n------------------------------");
	printf("\n|                            |");
	printf("\n|                            |");
	printf("\n|^                          ^|");
	printf("\n|^^                        ^^|");
	printf("\n|^^^                      ^^^|");
	printf("\n|^^^                      ^^^|");
	printf("\n|^^^^                   ^^^^^|");
	printf("\n|^^^^^                 ^^^^^^|");
	printf("\n|...,.,................,.,..||");
	printf("\n------------------------------\n");
}