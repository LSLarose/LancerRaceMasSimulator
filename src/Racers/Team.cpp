#include "Team.h"

Team::Team(): name("")
{
    members = std::list<Racer>();
}

Team::Team(std::string name, std::list<Racer> members):name(name), members(members)
{
}

Team::~Team()
{
}

void Team::update()
{
    //deal cards
    //racers play cards
    //resolve cards for everyone (move, status effects)

    //nearby interactions?
}
