#include "Enemy.h"
#include "Monster.h"
#include "Ninja.h"

int main(){
    Ninja ninja;
    Monster monstruo;
    
    Enemy *e1 = &ninja;
    Enemy *e2 = &monstruo;

    e1->setAttackPower(20);
    e2->setAttackPower(80);

    e1->gritar();
    e1 = &monstruo;
    e1->gritar();
    
    return 0;

}