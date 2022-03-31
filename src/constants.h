#pragma once

#ifndef constants_h
#define constants_h

#include "ofMain.h"

constexpr int ballVelocity = 10;
constexpr int platformWidth = 150;
constexpr int platformHeight = 20;
constexpr int platformSpeed = 500;
constexpr int platformYPos = 50;

enum class States{
    intro, menu, level, credits
};

enum class Bonuses{
    none = -1, doubleSpeed, doubleSize
};

enum Directions{
    left = -1, none = 0, right = 1
};

#endif /* constants_h */
