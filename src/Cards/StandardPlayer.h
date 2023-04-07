#pragma once

#include <map>
#include <list>
#include <string>
#include "../../include/Cards/ICardPlayer.h"


const int STANDARD_PLAYER_HAND_SIZE = 6;

class StandardPlayer: public ICardPlayer<STANDARD_PLAYER_HAND_SIZE>
{
public:
	StandardPlayer();
	~StandardPlayer();

	void setStatusEffect(std::string effect, bool status);
	void setPerk(std::string perk, bool status);

	void play(ICard& card);
private:
	std::map<std::string, bool> statusEffects;
	std::map<std::string, bool> perks;
};