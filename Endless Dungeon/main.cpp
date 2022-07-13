#include <iostream>
#include <Windows.h>

#include "user.h"
#include "monster.h"
#include "fight.h"
using namespace std;

/*
	I spelet kan en k�ra o�ndligt f�r varje level ska det bli sv�rare med hp+ eller attack+.
	B�r finnas s� att en kan heala p� n�got s�tt samt eventuell shop. Mat potions osv. 
	Finns olika monster som en kan st�tta p� och en l�ser upp mer monster f�r varje step en tar ner i dungeonen.
	Save funktion �r onintressant d� en kommer d� n�gon g�ng. D�remot highscore skulle kunna vara n�got av intresse.
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