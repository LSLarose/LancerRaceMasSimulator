#pragma once

class ICard 
{
public:
    ICard():isPlayed(false) {}
    virtual ~ICard() = 0;
    virtual void play() = 0;
protected:
    bool isPlayed;
};