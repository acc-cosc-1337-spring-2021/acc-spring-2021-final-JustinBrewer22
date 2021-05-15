//
#ifndef PHASE_H
#define PHASE_H
#include "roll.h"

enum RollOutcome
{
    natural,
    craps,
    point,
    seven_out,
    nopoint
};
class Phase
{
    public:
        RollOutcome get_outcome(Roll* roll);
};


#endif