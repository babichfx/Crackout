//
//  Timer.cpp
//  CrackoutGame
//
//  Created by Vitaliy Babich on 29.03.2022.
//

#include "Timer.h"

bool Timer::isTimerAlarm() const {
    auto check = ofGetElapsedTimef() - start_;
    if(check >= goalDuration_)
        return true;
    return false;
}
