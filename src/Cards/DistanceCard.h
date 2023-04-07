#pragma once
#include"../../include/Cards/ICard.h"

enum Distance
{
	puce = -1,
	escargot = 25,
	canard = 50,
	papillon = 75,
	lievre = 100,
	hirondelle = 200
};

class DistanceCard: public ICard
{
public:
	DistanceCard();
	DistanceCard(Distance distance);

private:
	Distance distance;
};