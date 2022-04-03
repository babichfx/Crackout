//
//  data.hpp
//  CrackoutGame
//
//  Created by Vitaliy Babich on 03.04.2022.
//

#ifndef data_hpp
#define data_hpp

#include "ofMain.h"
#include "constants.h"

class Data{
private:
    struct dataPlayer{
        ofVec2f playerPos;
        float playerWidth = 0;
        int playerScore = 0;
    };
private:
    dataPlayer dataPlayer_;
public:
    Data() {
        dataPlayer_.playerPos.y = ofGetHeight() - platformYPos;
        dataPlayer_.playerWidth = platformWidth;
    }
    ~Data() = default;
    
    float getPlayerPos() const {return dataPlayer_.playerPos.x;}
    void  setPlayerPos(float x){dataPlayer_.playerPos.x = x;}
    const ofVec2f & getPlayerPosVec2f() const {return dataPlayer_.playerPos;}
    float getPlayerWidth() const {return dataPlayer_.playerWidth;}
    void  setPlayerWidth(float w){dataPlayer_.playerWidth = w;}
    int   getScore() const {return dataPlayer_.playerScore;}
    void  addScore(int s){dataPlayer_.playerScore += s;}
};

#endif /* data_hpp */
