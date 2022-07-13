#include "fight.h"

user fight::battle(user hero, monster alexander)
{
	while (true)
	{
		int heroAttack = rand() % hero.attack, monsterAttack = rand() % alexander.attack;
		hero.hp -= monsterAttack;
		alexander.hp -= heroAttack;
		if (hero.hp <= 0 || alexander.hp <=0)
			break;
	}
	return hero;
}