//
//  bonus.hpp
//  CrackoutGame
//
//  Created by Vitaliy Babich on 29.03.2022.
//

#ifndef bonus_hpp
#define bonus_hpp

#include "constants.h"

class Bonus{
private:
    Bonuses bonusType_;
public:
    Bonus() { bonusType_ = static_cast<Bonuses>(rand()%2); }
    Bonus(Bonus&) = delete;
    ~Bonus() = default;
    Bonuses getType() const {return bonusType_;}
};


#endif /* bonus_hpp */
