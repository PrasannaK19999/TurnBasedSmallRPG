#include <iostream>
#include <vector>

#include "Enemy/Enemy.h"
#include "Player/Player.h"
#include "Weapon/Weapon.h"

void Get_RandomNo()
{
	std::cout << "Let's Assume getting a random No in Feature branch ... !" << std::endl;
}

int main()
{
	std::cout << "Let's  the Game Begin... \n" << std::endl;

	Enemy Goblin;
	std::vector<Player*> total_players;
	
	std::cout << " How Many Players in our Game.. : " << std::endl;
	int player_count = 0;
	std::cin >> player_count;

	for (int i = 0; i < player_count; i++)
	{
		total_players.push_back(new Player());
	}

	std::cout << total_players.size();

}
