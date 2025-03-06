#include <stdio.h>
#include <string.h>
#include <iostream>
#include <time.h>
#include "Feld.h"
#include "Player.h"

void cPlayer::step(cFeldPosition wahl)
{
	cPlayer* player = this; //this weil das der spieler der ich bin

	srand((unsigned)time(NULL));
	int irand = rand() % 3 + 0;
	char ckonsequenz = wahl.acoptionen[irand];

	switch (ckonsequenz)
	{
	case 'h':
		printf("\nDu triffst auf eine Hexe.\nSie gibt dir eine Phiole mit einem Gegenmittel gegen Vergiftungen.\n");
		player->hatGegenmittel = true;
		if (player->istVergiftet == true)
		{
			printf("\nDu trinkst die Phiole aus und merkst bald wie die Vergiftungssymtome nachlassen.\n");
			player->hatGegenmittel = false;
			player->istVergiftet = false;
		}
		break;
	case 'w':
		printf("\nDu triffst auf einen Werwolf!\n");
		if (player->hatSchwert == false)
		{
			if (player->istVerletzt == false)
			{
				printf("\nDu hast Glueck und konntest fliehen, wurdest aber verletzt und infiziert.\n");
				player->istVerletzt = true;
				player->istInfiziert = true;
				if (player->hatHeilung == true)
				{
					printf("\nDu nutzt deine Heilung um die Wunden zu versorgen.\n");
					player->istVerletzt = false;
					player->hatHeilung = false;
				}
			}
			else
			{
				printf("\nWegen deiner Verletzung kannst du nicht schnell genug entkommen und faellst dem Werwolf zum Opfer.\n");
				player->istLebendig = false;
			}
		}
		else
		{
			printf("\nDu nutzt dein Schwert um dich zu verteidigen.\nEs gelingt dir dich zu verteidigen, allerdings geht dabei dein Schwert kaputt.\n");
			player->hatSchwert = false;
		}
		break;
	case 'l':
		if (player->hatLiebe == false)
		{
			printf("\nDu hast endlich deine geliebte Person gefunden. Doch haelt die Freude ueber die Wiedervereinigung nicht lange, denn noch ist es nicht geschafft. Ihr muesst noch einen Weg aus dem Wald finden.\n");
			player->hatLiebe = true;
		}
		else
		{
			printf("\nHier ist nichts besonderes zu sehen.\n");
		}
		break;
	case 'f':
		if (player->hatILiebe == false)
		{
			printf("\nDu hast endlich deine geliebte Person gefunden. Doch haelt die Freude ueber die Wiedervereinigung nicht lange, denn noch ist es nicht geschafft. Ihr muesst noch einen Weg aus dem Wald finden.\n");
			player->hatILiebe = true;
		}
		else
		{
			printf("\nHier ist nichts besonderes zu sehen.\n");
		}
		break;
	case 's':
		printf("\nDu hast auf dem Weg ein Schwert gefunden.\n");
		if (player->hatSchwert == true)
		{
			printf("\nLeider hast du schon eins und kannst kein zweites mehr tragen und musst es liegen lassen.\n");
		}
		else
		{
			player->hatSchwert = true;
		}
		break;
	case 'b':
		printf("\nDu hast etwas Wasser und ein paar Kraeuter gefunden, von denen du weisst, dass sie heilende Wirkung haben.\nDu nimmst von allem etwas mit.\n");
		player->hatHeilung = true;
		if (player->istVerletzt == true)
		{
			printf("\nDu nutzt deine Heilung sofort um deine Wunden zu versorgen.\n");
			player->hatHeilung = false;
		}
		break;
	case 'd':
		printf("\nDu musst dich durch Dornenbuesche kaempfen.\nNachdem du auf der anderen Seite wieder raus kommst, bemerkst du nicht nur die Verletzungen durch die scharfen Dornen.\nDir wird etwas schwindlig und schlecht, du hast das Gefuehl, dass dir das Atmen schwerer faellt.\nScheint so, als waeren die Dornen auch noch giftig gewesen.\n");
		player->istVerletzt = true;
		player->istVergiftet = true;
		if (player->hatGegenmittel == true)
		{
			printf("\nDu trinkst die Phiole, die du von der Hexe hast, aus und merkst bald wie die Vergiftungssymptome nachlassen.\n");
			player->hatGegenmittel = false;
			player->istVergiftet = false;
		}
		if (player->hatHeilung == true)
		{
			printf("\nDu nutzt deine Heilung um die Wunden zu versorgen.\n");
			player->istVerletzt = false;
			player->hatHeilung = false;
		}
		break;
	case 'a':
		printf("\nDu verlaesst den Wald.\n");
		player->istinWald = false;
		break;
	}
	printf("[enter]");
	getchar();
	getchar();
	
}