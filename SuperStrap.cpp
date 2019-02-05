/*
 * File:   SuperStrap.cpp
 * Author: Emmanuel Gonzalez <eremond@protonmail.com>
 *
 */

#include "SuperStrap.h"


double SuperStrap::hit(double armor = 0){
  double damage;
  srand(time(NULL));

int critical = rand() % 100 + 1;


if (critical > 80)       // If you're lucky you'll ignore all armor!
    damage = hitPoints;
else if (critical > 70) // If you're a little lucky you'll still land a blow.
    damage = hitPoints-armor;
else                    // The Super Strap is too powerful... You missed.
    damage = 0;

if (damage < 0)
  return 0;

    return damage;
}
