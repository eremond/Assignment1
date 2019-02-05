/*
 * File:   SimpleHammer.cpp
 * Author: Emmanuel Gonzalez <eremond@protonmail.com>
 *
 */

#include "SimpleHammer.h"


double SimpleHammer::hit(double armor){
  double damage;

    if (armor < 30){      // If Armor is Less Than 30, Ignore Armor
      damage = hitPoints;
    } else{
    damage = hitPoints - armor; // If Armor is More Than 30, Dmg = hitpoints - armor.
    if(damage < 0){
        return 0;
    }
  }

    return damage;
}
