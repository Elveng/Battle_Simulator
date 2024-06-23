
#include "Monster.h"



using namespace std;
/*
void monster_attack(Monster m, Player p) {
	int damage = m.attack_p - p.defence;
	if (damage < 1) {
		damage = 1;
	}
	p.health = p.health - damage;
}

void Monster::monster_attack(Monster m, Player p)
{
	int damage = m.attack_p - p.defence;
	if (damage < 1) {
		damage = 1;
	}
	p.health = p.health - damage;
}
*/
int Monster::monster_attack(int def, int atc)
{
	int damage = atc - def;
	if (damage < 1) {
		damage = 1;
	}
	return damage;
}
