#include <iostream>





class Player {
public:
	int health;
	int attack_p;
	int defence;
	
	Player() {
		this->health = rand() % 150 + 100;
		this->attack_p = rand() % 40 + 10;
		this->defence = rand() % 20 + 10;
	}
	int player_attack(int def, int atc);
};