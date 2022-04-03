//
//  game.hpp
//  CrackoutGame
//
//  Created by Vitaliy Babich on 27.03.2022.
//

#ifndef game_hpp
#define game_hpp

#include "ofMain.h"
#include "constants.h"
#include "level.h"
#include "data.h"

class Game {
public:
    Game();
    ~Game();
    void update();
    void render();
    void keyPressed(int);
    void keyReleased(int);
private:
    Level * level_;
    Data gameData_;
    States state_;
};

#endif /* game_hpp */
