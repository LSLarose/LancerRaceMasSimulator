#pragma once
#include "../../include/Cards/IDeck.h"

class StandardDeck: public IDeck
{
public:
	StandardDeck ();

	ICard* draw();
private:

};