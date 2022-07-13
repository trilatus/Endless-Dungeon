#include "monster.h"

monster::monster(int level)
{
	srand(time(0));
	hp = rand() % (10 * level);
	defence = level;
	attack = (rand() % (10 + level)) + 1;
}