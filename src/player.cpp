//
//  player.cpp
//  CrackoutGame
//
//  Created by Vitaliy Babich on 27.03.2022.
//

#include "player.h"

void Player::setDirection(const Directions &d){
    moveDirection_ = d;
}

void Player::calculateVelocity(){
    velocity_ = moveDirection_ * speed_ * ofGetLastFrameTime();
}

void Player::getBonus(const Bonus &b){
    if(isBonusActive_) stopBonus();
    
    bonus_ = b.getType();
    timerBonus_ = new Timer{2};
    isBonusActive_ = true;
    
    switch(bonus_){
        case Bonuses::doubleSpeed:
            speed_ = platformSpeed * 2;
            calculateVelocity();
            break;
        case Bonuses::doubleSize:
            width_ = platformWidth * 2;
            break;
        default:
            break;
    }
}

void Player::stopBonus(){
    switch(bonus_){
        case Bonuses::doubleSpeed:
            speed_ = platformSpeed;
            break;
        case Bonuses::doubleSize:
            width_ = platformWidth;
            break;
        default:
            break;
    }
        
    bonus_ = Bonuses::none;
    delete timerBonus_;
    isBonusActive_ = false;
}

void Player::stopBonusByTimer(){
    if(timerBonus_->isTimerAlarm()) stopBonus();
}

float Player::move(float posX) {
    posX += velocity_;
    auto rightBorder = ofGetWidth();
    if((posX) < 0) posX = 0;
    if((posX + width_) > rightBorder) posX = rightBorder - width_;
    return posX;
}
