#pragma once
#include <list>
#include <memory>
#include "ICard.h"

class IDeck
{
public:
    IDeck():contents() {}
    virtual ICard* draw() = 0;
protected:
    std::list<std::unique_ptr<ICard>> contents;
};