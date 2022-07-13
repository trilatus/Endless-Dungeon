#include <iostream>
#include <Windows.h>

#include "user.h"
#include "monster.h"
#include "fight.h"
using namespace std;

/*
	I spelet kan en köra oändligt för varje level ska det bli svårare med hp+ eller attack+.
	Bör finnas så att en kan heala på något sätt samt eventuell shop. Mat potions osv. 
	Finns olika monster som en kan stötta på och en låser upp mer monster för varje step en tar ner i dungeonen.
	Save funktion är onintressant då en kommer dö någon gång. Däremot highscore skulle kunna vara något av intresse.
*/

user hero; //Global spelar variabel


void menu()
{
	cout << "+++++TEST GAME+++++\n";
}

void game()
{
	fight tempFight;
	for(int level = 1; hero.hp > 0; level++)
	{
		monster alexander(level);
		cout << hero.hp << endl;
		hero = tempFight.battle(hero, alexander);
	}
	cout << hero.hp << " You lose!\n";
}

int main()
{
	menu();
	game();
	return 0;
}