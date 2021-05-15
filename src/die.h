//
#ifndef DIE_H
#define DIE_H

class Die
{
public:
    void roll();
    int const rolled_value() { return roll_value; }

private:
    int roll_value;
    int sides{6};
};

#endif