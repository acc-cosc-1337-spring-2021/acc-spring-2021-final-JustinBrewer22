//
#ifndef SHOOTER_H
#define SHOOTER_H
#include "roll.h"
#include <iostream>
#include <vector>
using namespace std;

class Shooter
{
public:
    Roll* throw_die(Die &die1, Die &die2);
    Shooter operator << (vector<Roll*>);
    ~Shooter();

private:
    vector<Roll*> rolls;
};

#endif