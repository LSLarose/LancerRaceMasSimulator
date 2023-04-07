#pragma once
#include <array>
#include <memory>

#include "ICard.h"

template<int handSize>
class ICardPlayer {
public:
    ICardPlayer() { hand = std::array<ICard*, handSize>(); }
    virtual void play(ICard& card) = 0;
protected:
    std::array<ICard*, handSize> hand;
};