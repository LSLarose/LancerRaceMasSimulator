#include <algorithm>
#include "Racer.h"

Racer::Racer() :trait(Personality::unavailable), hull(0), agility(0), systems(0), engineering(0) {}

Racer::Racer(Personality trait, int hull, int agility, int systems, int engineering):trait(trait), hull(hull), agility(agility), systems(systems), engineering(engineering)
{
}

int Racer::getHull()
{
    return getHase(hull, sturdy);
}

int Racer::getAgility()
{
    return getHase(agility, quick);
}

int Racer::getSystems()
{
    return getHase(systems, playful);
}

int Racer::getEngineering()
{
    return getHase(engineering, confident);
}

int Racer::getHase(int haseScore, Personality personality) {
    return std::clamp(haseScore + (trait == personality ? HASE_PERSONALITY_BONUS : 0), MIN_HASE_BONUS, MAX_HASE_BONUS);
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
