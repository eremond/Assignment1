/*
 * File:   CrazyRandomSword.h
 * Author: Emmanuel Gonzalez <eremond@protonmail.com>
 *
 *
 */

#include <string>
#include <stdlib.h>
#include <time.h>
#include <cmath>
#include "Weapon.h"

#ifndef CRAZYRANDOMSWORD_H
#define CRAZYRANDOMSWORD_H

/**
 * Defines the behavior of a Crazy Random Sword
 */
class CrazyRandomSword : public Weapon {
public:

    CrazyRandomSword() : Weapon("Crazy Random Sword",0) //Calls Weapon(name, hitpoints)
    {
      srand(time(NULL));
      hitPoints = rand() % 10 + 1;

    }

    virtual ~CrazyRandomSword() {};

    virtual double hit(double armor);

};

#endif /* CRAZYRANDOMSWORD_H */
