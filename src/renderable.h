//
//  renderable.h
//  emptyExample
//
//  Created by Vitaliy Babich on 20.03.2022.
//

#ifndef renderable_h
#define renderable_h

#include "ofMain.h"
#include "constants.h"


class Renderable{
private:
    ofVec2f position_;
public:
    virtual ~Renderable() = 0;
    virtual void draw() = 0;
};


class Ball : public Renderable{
private:
    ofVec2f vel_;
    int modifier_;
public:
    Ball() : modifier_(0), vel_(ofVec2f(gBallVelocity)){};
    void move();
    void solveCollision();
    void applyBonus();
};


class Platform : public Renderable{
private:
    int width_;
public:
    Platform() : width_(gPlatformWidth){};
    void applyBonus();
};


class Block : public Renderable{
private:
    int type_;
    int durability_;
public:
    void hit(int);
    void create();
    void destroy();
    int getType();
};


class Bonus : public Renderable{
private:
    int type_;
public:
    Bonus(int t) : type_(t){};
    void applyBonus(int);
};


#endif /* renderable_h */
