#include <iostream>

#include "Player.cpp"
#include "Monster.cpp"
#include <string.h>
using namespace std;



int main()
{ 
	
	Player player;
	Monster monster;
	string player_name = "Samed";
	string monster_name = "Beyaz Troll";
	int monster_h_f = monster.health;
	int player_h_f = player.health;
	cout << "Player is entering to the battle arena!";
	cout << "Name: " << player_name << endl;
	cout << "Health: " << player.health << endl;
	cout << "Attack Power: " << player.attack_p << endl;
	cout << "Defense: " << player.defence << endl;
	cout << "\n";
	cout << "Monster is entering to the battle arena!";
	cout << "Name: " << monster_name << endl;
	cout << "Health: " << monster.health << endl;
	cout << "Attack Power: " << monster.attack_p << endl;
	cout << "Defense: " << monster.defence << endl;
	cout << "\n";
	int i=0;
	int a=0;
	while (player.health != 0) {
		i++;
		monster.health=monster.health - player.player_attack(monster.defence, player.attack_p);
		if (monster.health < 0) {
			monster.health = 0;
		}
		cout << "Turn "<< i << " started!" << endl;
		cout << "------------------------------------------------------------------" << endl;
		cout << "Player " << player_name << " is attacking the monster "<< monster_name << endl;
		cout << "Player damage: " << player.attack_p << endl;
		cout << "Monster Remaing Health: " << monster.health << "/" << monster_h_f << endl;
		if (monster.health == 0) {
			cout << "Monster " << monster_name << " has been defeated!" << endl;
			cout << "------------------------------------------------------------------" << endl;
			a = 1;
			break;
		}
		player.health = player.health - monster.monster_attack(player.defence, monster.attack_p);
		if (player.health < 0) {
			player.health = 0;
		}
		
		cout << "Monster " << monster_name << " is attacking the player " << player_name << endl;
		cout << "Monster damage: " << monster.attack_p << endl;
		cout << "Player Remaing Health: " << player.health << "/" << player_h_f << endl;
		if (player.health == 0) {
			cout << "Player " << player_name << " has been defeated!" << endl;
			cout << "------------------------------------------------------------------" << endl;
			a = 2;
			break;
		}

	}
	if (a == 1) {
		cout << "Player " << player_name << " has won the battle with "<< player.health<< " health remaining!" << endl;
	}
	if (a == 2) {
		cout << "Monster " << monster_name << " has won the battle with " << monster.health << " health remaining!" << endl;
	}
	cout << "Thank you for playing my Comp 2215 Battle Sim - ";
	cout << "Tahsin Berk Oztekin,21070001035";
	return 0;
}