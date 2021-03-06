//
#ifndef ROLL_H
#define ROLL_H
#include "die.h"

class Roll
{
public:
    Roll(Die &die1, Die &die2) : die1(die1), die2(die2) {}
    void roll_die();
    int roll_value()const { return value; }

private:
    Die &die1;
    Die &die2;
    bool rolled{false};
    int value;
};

#endif