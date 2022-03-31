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

void Player::startBonus(const Bonus &b){
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

void Player::move() {
    pos_.x += velocity_;
    auto rightBorder = ofGetWidth();
    if((pos_.x) < 0) pos_.x = 0;
    if((pos_.x + width_) > rightBorder) pos_.x = rightBorder - width_;
}
