//
//  player.hpp
//  CrackoutGame
//
//  Created by Vitaliy Babich on 27.03.2022.
//

#ifndef player_hpp
#define player_hpp

#include "constants.h"
#include "Timer.h"
#include "bonus.h"
#include "data.h"

class Player {
private:
    Data       *data_;
    //ofVec2f     pos_;
    float       velocity_;
    Directions  moveDirection_;
    float       speed_;
    float       width_;
    bool        isBonusActive_;
    Bonuses     bonus_;
    Timer      *timerBonus_;
public:
    Player() : velocity_(0), speed_(platformSpeed), width_(platformWidth), isBonusActive_(false) {}
    ~Player()       = default;
    Player(Player&) = delete;
    
    //inline const ofVec2f & getPosition() const {return pos_;}
    inline const float   & getWidth() const {return width_;}
    inline const bool isBonusActive() const {return isBonusActive_;}
    
    float move(float posX);
    void calculateVelocity();
    void setDirection(const Directions&);
    void stop() {moveDirection_ = Directions::none;}
    void getBonus(const Bonus&);
    void stopBonus();
    void stopBonusByTimer();
};


#endif /* player_hpp */
