#ifndef H_MONSTER
#define H_MONSTER

#include "Enemy.h"

class Monster: public Enemy{
    public:
        void attack();
        void gritar();

};

#endif