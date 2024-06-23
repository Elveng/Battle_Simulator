#include <iostream>



class Monster {
public:
	int health;
	int attack_p;
	int defence;

	Monster() {
		this->health = rand() % 150 + 100;
		this->attack_p = rand() % 40 + 10;
		this->defence = rand() % 20 + 10;
	}
	int monster_attack(int def, int atc);
};
