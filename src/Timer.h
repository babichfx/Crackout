//
//  Timer.hpp
//  CrackoutGame
//
//  Created by Vitaliy Babich on 29.03.2022.
//

#ifndef Timer_hpp
#define Timer_hpp

#include "ofMain.h"

class Timer {
private:
    float start_;
    float goalDuration_;
    void (*func_)();
public:
    Timer() = delete;
    Timer(Timer&) = delete;
    Timer(float d) : start_(ofGetElapsedTimef()), goalDuration_(d) {}
    ~Timer() = default;
    bool isTimerAlarm() const;
    void setTimer( void (*func_)() );
};

#endif /* Timer_hpp */
