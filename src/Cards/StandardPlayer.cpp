#include "StandardPlayer.h"

StandardPlayer::StandardPlayer():statusEffects(std::map<std::string, bool>()), perks(std::map<std::string, bool>())
{
}

StandardPlayer::~StandardPlayer()
{
}

void StandardPlayer::setStatusEffect(std::string effect, bool status)
{
    statusEffects.emplace(effect, status);
}

void StandardPlayer::setPerk(std::string perk, bool status)
{
    perks.emplace(perk, status);
}

void StandardPlayer::play(ICard& card)
{
}