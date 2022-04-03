//
//  level.cpp
//  CrackoutGame
//
//  Created by Vitaliy Babich on 27.03.2022.
//

#include "level.h"

void Playground::update(Data & d){
    if(player_.isBonusActive()) player_.stopBonusByTimer();
    player_.calculateVelocity();
    float newPos = player_.move(d.getPlayerPos());
    d.setPlayerPos(newPos);
    d.setPlayerWidth(player_.getWidth());
}

void Playground::keyPressed(int key){
    if(key == OF_KEY_LEFT)
        player_.setDirection(Directions::left);
    if(key == OF_KEY_RIGHT)
        player_.setDirection(Directions::right);
}

void Playground::keyReleased(int key){
    if(key == OF_KEY_LEFT || key == OF_KEY_RIGHT)
        player_.stop();
}
