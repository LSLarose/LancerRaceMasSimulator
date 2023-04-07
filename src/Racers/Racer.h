#pragma once
#include "../Cards/StandardPlayer.h"

const int MIN_HASE_BONUS = 0;
const int HASE_PERSONALITY_BONUS = 1;
const int MAX_HASE_BONUS = 6;

enum Personality
{
	unavailable = -1,
	sturdy,
	quick,
	playful,
	confident,
	len
};

class Racer : public StandardPlayer
{
public:
	Racer();
	Racer(Personality trait, int hull, int agility, int systems, int engineering);

	// getters
	int getHull();
	int	getAgility();
	int getSystems();
	int getEngineering();

	//setters
	void setHull(int newHull);
	void setAgility(int newAgility);
	void setSystems(int newSystems);
	void setEngineering(int newEngineering);

private:
	Personality trait;
	int hull;
	int agility;
	int systems;
	int engineering;

	int getHase(int haseScore, Personality personality);
};