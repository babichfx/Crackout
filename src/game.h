//
//  game.hpp
//  CrackoutGame
//
//  Created by Vitaliy Babich on 27.03.2022.
//

#ifndef game_hpp
#define game_hpp

#include "constants.h"

class Game {
public:
    Game() : state_(States::intro) {};
    ~Game() = default;
private:
    States state_;
};

#endif /* game_hpp */
