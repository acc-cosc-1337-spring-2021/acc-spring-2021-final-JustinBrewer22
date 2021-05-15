//
#include "die.h"
#include <time.h>
#include <stdlib.h>

void Die::roll()
{
    roll_value = rand() % sides + 1;
}