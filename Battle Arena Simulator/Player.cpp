

#include "Player.h"


using namespace std;
/*
void player_attack(Monster m, Player p) {
	int damage = p.attack_p - m.defence;
	if (damage < 1) {
		damage = 1;
	}
	m.health = m.health - damage;
}
*/


int Player::player_attack(int def, int atc)
{
	int damage = atc - def;
	if (damage < 1) {
		damage = 1;
	}
	return damage;
}
