//
//  level.hpp
//  CrackoutGame
//
//  Created by Vitaliy Babich on 27.03.2022.
//

#ifndef level_hpp
#define level_hpp

#include "player.h"
#include "data.h"

class Level{
public:
    virtual void update(Data&) = 0;
    virtual void keyPressed(int) = 0;
    virtual void keyReleased(int) = 0;
};

class Playground : public Level{
private:
    Player player_;
public:
    Playground() = default;
    ~Playground() = default;
    Playground(Playground&) = delete;
    void update(Data&);
    void keyPressed(int);
    void keyReleased(int);
};

#endif /* level_hpp */
