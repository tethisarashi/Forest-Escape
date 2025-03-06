#include <stdio.h>
#include <iostream>
#include <time.h>
#include "Feld.h"
#include "FelderPrint.h"
#include "FeldPosition.h"
#include "DunklesFeld.h"
#include "NebelFeld.h"
#include "HellesFeld.h"
#include "GebFeld.h"
#include "SeeFeld.h"
#include "RandFeld.h"
#include "Player.h"
#include "Game.h"
#pragma warning(disable : 4996)
#define _CRT_SECURE_NO_WARNINGS

cPlayer cGame::initGame(cPlayer player)
{
	cDunklesFeld* Dunkel = new cDunklesFeld;
	cNebelFeld* Nebel = new cNebelFeld;
	cHellesFeld* Helles = new cHellesFeld;
	cGebFeld* Geb = new cGebFeld;
	cSeeFeld* See = new cSeeFeld;
	cRandFeld* Rand = new cRandFeld;

	cFeldPosition* PositionR = new cFeldPosition;
	cFeldPosition* PositionL = new cFeldPosition;
	cFeldPosition* PosFeld = new cFeldPosition;
	
	
	cFelderPrint* PrintFeld = new cFelderPrint;
	
	int igewaehlt;

	printf("\nDu siehst zwei Wege vor dir. \n");
	printf("Rechts: ");
	int irechts;
	irechts = rand() % 5 + 0;
	switch (irechts)
	{
	case 0:
		Dunkel->m_acNameF();
		PositionR->acoptionen[0] = Dunkel->acoptionen[0];
		PositionR->acoptionen[1] = Dunkel->acoptionen[1];
		PositionR->acoptionen[2] = Dunkel->acoptionen[2];
		PositionR->acoptionen[3] = Dunkel->acoptionen[3];
		PrintFeld->FeldDunkel();
		break;
	case 1:
		Nebel->m_acNameF();
		PositionR->acoptionen[0] = Nebel->acoptionen[0];
		PositionR->acoptionen[1] = Nebel->acoptionen[1];
		PositionR->acoptionen[2] = Nebel->acoptionen[2];
		PositionR->acoptionen[3] = Nebel->acoptionen[3];
		PrintFeld->FeldNebel();
		break;
	case 2:
		Helles->m_acNameF();
		PositionR->acoptionen[0] = Helles->acoptionen[0];
		PositionR->acoptionen[1] = Helles->acoptionen[1];
		PositionR->acoptionen[2] = Helles->acoptionen[2];
		PositionR->acoptionen[3] = Helles->acoptionen[3];
		PrintFeld->FeldHell();
		break;
	case 3:
		Geb->m_acNameF();
		PositionR->acoptionen[0] = Geb->acoptionen[0];
		PositionR->acoptionen[1] = Geb->acoptionen[1];
		PositionR->acoptionen[2] = Geb->acoptionen[2];
		PositionR->acoptionen[3] = Geb->acoptionen[3];
		PrintFeld->FeldGeb();
		break;
	case 4:
		See->m_acNameF();
		PositionR->acoptionen[0] = See->acoptionen[0];
		PositionR->acoptionen[1] = See->acoptionen[1];
		PositionR->acoptionen[2] = See->acoptionen[2];
		PositionR->acoptionen[3] = See->acoptionen[3];
		PrintFeld->FeldSee();
		break;
	case 5:
		Rand->m_acNameF();
		PositionR->acoptionen[0] = Rand->acoptionen[0];
		PositionR->acoptionen[1] = Rand->acoptionen[1];
		PositionR->acoptionen[2] = Rand->acoptionen[2];
		PositionR->acoptionen[3] = Rand->acoptionen[3];
		PrintFeld->FeldRand();
		break;
	}
	
	printf("\nLinks: ");
	srand((unsigned)time(NULL));
	int ilinks;
	ilinks = rand() % 5 + 0;
	switch (ilinks)
	{
	case 0:
		Dunkel->m_acNameF();
		PositionL->acoptionen[0] = Dunkel->acoptionen[0];
		PositionL->acoptionen[1] = Dunkel->acoptionen[1];
		PositionL->acoptionen[2] = Dunkel->acoptionen[2];
		PositionL->acoptionen[3] = Dunkel->acoptionen[3];
		PrintFeld->FeldDunkel();
		break;
	case 1:
		Nebel->m_acNameF();
		PositionL->acoptionen[0] = Nebel->acoptionen[0];
		PositionL->acoptionen[1] = Nebel->acoptionen[1];
		PositionL->acoptionen[2] = Nebel->acoptionen[2];
		PositionL->acoptionen[3] = Nebel->acoptionen[3];
		PrintFeld->FeldNebel();
		break;
	case 2:
		Helles->m_acNameF();
		PositionL->acoptionen[0] = Helles->acoptionen[0];
		PositionL->acoptionen[1] = Helles->acoptionen[1];
		PositionL->acoptionen[2] = Helles->acoptionen[2];
		PositionL->acoptionen[3] = Helles->acoptionen[3];
		PrintFeld->FeldHell();
		break;
	case 3:
		Geb->m_acNameF();
		PositionL->acoptionen[0] = Geb->acoptionen[0];
		PositionL->acoptionen[1] = Geb->acoptionen[1];
		PositionL->acoptionen[2] = Geb->acoptionen[2];
		PositionL->acoptionen[3] = Geb->acoptionen[3];
		PrintFeld->FeldGeb();
		break;
	case 4:
		Rand->m_acNameF();
		PositionL->acoptionen[0] = Rand->acoptionen[0];
		PositionL->acoptionen[1] = Rand->acoptionen[1];
		PositionL->acoptionen[2] = Rand->acoptionen[2];
		PositionL->acoptionen[3] = Rand->acoptionen[3];
		PrintFeld->FeldRand();
		break;
	case 5:
		See->m_acNameF();
		PositionL->acoptionen[0] = See->acoptionen[0];
		PositionL->acoptionen[1] = See->acoptionen[1];
		PositionL->acoptionen[2] = See->acoptionen[2];
		PositionL->acoptionen[3] = See->acoptionen[3];
		PrintFeld->FeldSee();
		break;
		
	}

	
	printf("\nWillst du nach rechts [1], oder nach links [2] gehen?\n");
	scanf("%i", &igewaehlt); fflush(stdin);
	
	cFeldPosition wahl{};
	switch (igewaehlt)
	{
	case 1:
		printf("\nDu hast den rechten Weg gewaehlt.\n");
		wahl.acoptionen[0] = PositionR->acoptionen[0];
		wahl.acoptionen[1] = PositionR->acoptionen[1];
		wahl.acoptionen[2] = PositionR->acoptionen[2];
		wahl.acoptionen[3] = PositionR->acoptionen[3];
		break;
	case 2:
		printf("\nDu hast den linken Weg gewaehlt.\n");
		wahl.acoptionen[0] = PositionL->acoptionen[0];
		wahl.acoptionen[1] = PositionL->acoptionen[1];
		wahl.acoptionen[2] = PositionL->acoptionen[2];
		wahl.acoptionen[3] = PositionL->acoptionen[3];
		break;
	}
	
	player.step(wahl);
	return player;
}

void cGame::tickGame()
{
	cPlayer leben;
	while ((leben.istLebendig == true) && (leben.istinWald == true))
	{
		cGame game;
		leben = game.initGame(leben); //nimmt leben arbeitet damit und gibt zurück
	}

	if (leben.istLebendig == true)
	{
		if (leben.hatLiebe == true)
		{
			if (leben.hatILiebe == true)
			{
				printf("\nDu hast zwar deine Liebe gefunden und aus dem Wald gebracht. Nur hast du leider auch den Imposter mit genommen. Der Gestaltwandler bringt euch leider beide um. Viel Erfolg beim naechsten Versuch.\n");
			}
			else
			{
				if (leben.istInfiziert == true)
				{
					printf("\nDu hat es geschafft, du bist zusammen mit deiner Liebe aus dem Wald entkommen. Doch eines trurigen Vollmondnachts merkst du, wie du dich zu verwandeln beginnst.\nDer Wehrwolf hat dich infiziert und dich somit zu dem selben Schicksal verdammt.\nUm deine Liebe nicht in Gefahr zu bringen, beschliesst du, sie zu verlassen und alleine im Wald zu leben.\n");
					if (leben.istVergiftet == true)
					{
						printf("\nLeider kannst du nicht mehr lange gegen die Vergiftung ankaempfen und du wirst wohl oder uebel bald sterben.");
					}
				}
				else
				{
					printf("\nDu hast es geschafft. Du hast deine Liebe gefunden und ihr seid zusammen entkommen <3");
					if (leben.istVergiftet == true)
					{
						printf("\nLeider kannst du nicht mehr lange gegen die Vergiftung ankaempfen und du wirst wohl oder uebel bald sterben.");
					}
				}
			}
		}
		else
		{
			if (leben.hatILiebe == true)
			{
				printf("\nDu hast es geschafft. Du bist aus dem Wand entkommen.\nDoch was du da dabei hast ist leider nicht deine Liebe, sondern ein Gestaltwandler, der nur darauf gewartet hat, dass ihn jemand aus dem Wald befreit. Doch er fuehlt sich keines wegs zu Dank verpflichtet. Im Gegenteil, Um Zeugen los zu werden bringt er dich an Ort und Stelle um.\n");
			}
			else
			{
				printf("\nDu bist aus dem Wand entkommen. Doch hast du deine Liebe nicht gefunden. Unfaehing deine einzige alleinige Liebe zu vergessen verbringst du dein restliches Leben in trauriger Einsamkeit.\n");
				if (leben.istVergiftet == true)
				{
					printf("\nLeider kannst du nicht mehr lange gegen die Vergiftung ankaempfen und du wirst wohl oder uebel bald sterben.");
				}
			}
		}
	}
	else
	{
		if (leben.hatLiebe == true)
		{
			if (leben.hatILiebe == true)
			{
				printf("\nDu liegst im Sterben. Und dann musst du auch noch mit ansehen, wie der Imposter den du bei dir hattest deine Liebe ermordet. Ihre Schreie und Todesqualen sind das letzte was du wahrnimmst bevor alles schwarz wird.\n");
			}
			else
			{
				printf("\nDu liegst im Sterben. Doch wenigstens bist du nicht alleine. Deine Liebe bleibt bei dir bis zu letzt. Doch quaelt dich trotzdem die Frage, ob ihr letzten endes doch beide sterben werdet.\n");
			}
		}
		else
		{
			printf("\nDu liegst im Sterben. Deine Letzten Gedanken richten sich an deine Liebe, bis du letztendlich alleine deinen letzten atem aushauchst.\n");
		}
	}
}
