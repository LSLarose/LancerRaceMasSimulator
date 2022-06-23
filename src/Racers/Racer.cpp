#include <algorithm>
#include "Racer.h"

Racer::Racer() :trait(Personality::unavailable), hull(0), agility(0), systems(0), engineering(0) {}

Racer::Racer(Personality trait, int hull, int agility, int systems, int engineering):trait(trait), hull(hull), agility(agility), systems(systems), engineering(engineering)
{
}

int Racer::getHull()
{
    return std::clamp(hull + (trait == sturdy ? HASE_PERSONALITY_BONUS : 0), MIN_HASE_BONUS, MAX_HASE_BONUS);
}

int Racer::getAgility()
{
    return std::clamp(agility + (trait == quick ? HASE_PERSONALITY_BONUS : 0), MIN_HASE_BONUS, MAX_HASE_BONUS);
}

int Racer::getSystems()
{
    return std::clamp(systems + (trait == playful ? HASE_PERSONALITY_BONUS : 0), MIN_HASE_BONUS, MAX_HASE_BONUS);
}

int Racer::getEngineering()
{
    return std::clamp(engineering + (trait == confident ? HASE_PERSONALITY_BONUS : 0), MIN_HASE_BONUS, MAX_HASE_BONUS);
}

void Racer::setHull(int newHull)
{
    hull = newHull;
}

void Racer::setAgility(int newAgility)
{
    agility = newAgility;
}

void Racer::setSystems(int newSystems)
{
    systems = newSystems;
}

void Racer::setEngineering(int newEngineering)
{
    engineering = newEngineering;
}
