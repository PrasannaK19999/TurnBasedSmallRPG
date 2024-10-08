#pragma once
#include <iostream> 

enum class EEnemyBehavior
{
	EEB_Normal,
	EEB_Patrolling,
	EEB_Aggressive
};

class Enemy
{
public:
	std::string Name;

	EEnemyBehavior CurrentBehavior;

};