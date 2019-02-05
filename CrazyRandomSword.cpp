/*
 * File:   CrazyRandomSword.cpp
 * Author: Emmanuel Gonzalez <eremond@protonmail.com>
 *
 */

#include "CrazyRandomSword.h"


double CrazyRandomSword::hit(double armor){
  double damage;
  srand(time(NULL));

int third = floor(armor/3.0);
int ignore = rand() % (third-2) + 2; // Ignore Random number of armor from 2 - (1/3 Armor)

    damage = hitPoints - ignore;
    if(damage < 0){
        return 0;
    }


    return damage;
}
