//
#include "shooter.h"
#include <iostream>
using namespace std;

Roll* Shooter::throw_die(Die &die1, Die &die2)
{
    Roll* dice = new Roll(die1, die2);
    dice->roll_die();
    rolls.push_back(move(dice));

    return dice;
}

Shooter::~Shooter()
{
    for(size_t i = 0; i < rolls.size() + 1; i = i + 1)
    {
        delete rolls[i];
    }
}
