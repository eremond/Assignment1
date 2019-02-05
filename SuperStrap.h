/*
 * File:   SuperStrap.h
 * Author: Emmanuel Gonzalez <eremond@protonmail.com>
 *
 *
 */

#include <string>
#include <stdlib.h>
#include <stdlib.h>
#include <time.h>
#include "Weapon.h"

#ifndef SUPERSTRAP_H
#define SUPERSTRAP_H

/**
 * Defines the behavior of a Super Strap - Hitpoints 50 - Doesn't ignore armor - Critical Chance!
 */
class SuperStrap : public Weapon {
public:

    SuperStrap() : Weapon("Super Strap",50.0) //Calls Weapon(name, hitpoints)
    {
    }

    virtual ~SuperStrap() {};

    virtual double hit(double armor);

};

#endif /* SUPERSTRAP_H */
