#include "Game.h"
#include "Feld.h"
#include "FelderPrint.h"
#include "DunklesFeld.h"
#include "NebelFeld.h"
#include "HellesFeld.h"
#include "GebFeld.h"
#include "SeeFeld.h"
#include "RandFeld.h"
#include "Player.h"
#include <iostream>
#include <stdio.h>
#include <string.h>
#pragma warning(disable : 4996)
#define _CRT_SECURE_NO_WARNINGS

int main()
{
	printf("===============\nDer Zauberwald\n===============\n");
	printf("\nDeine Liebe ist irgendwo im magischen Wald gefangen. Du musst sie finden und mit ihr zusammen aus dem Wald entkommen.\nDoch vorsicht, im Wald lauern viele Gefahren, also gib gut acht und waehle deine naechsten Schritte weise!\n");
	cGame startGame;
	startGame.tickGame();
}

