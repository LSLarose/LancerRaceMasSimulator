#pragma once

#include <list>
#include <string>
#include "Racer.h"

class Team
{
public:
	Team();
	Team(std::string name, std::list<Racer> members);
	~Team();

private:
	void update();
	std::string name;
	std::list<Racer> members;
};