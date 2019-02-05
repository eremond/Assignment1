/*
 * File:   SimpleHammer.h
 * Author: Emmanuel Gonzalez <eremond@protonmail.com>
 *
 *
 */

#include <string>
#include "Weapon.h"

#ifndef SIMPLEHAMMER_H
#define SIMPLEHAMMER_H

/**
 * Defines the behavior of a simple hammer (hitpoint = 25, ignores 30 armor points)
 */
class SimpleHammer : public Weapon {
public:

    SimpleHammer() : Weapon("Simple Hammer",25.0) //Calls Weapon(name, hitpoints)
    {
    }

    virtual ~SimpleHammer() {};

    virtual double hit(double armor);

};

#endif /* SIMPLEHAMMER_H */
