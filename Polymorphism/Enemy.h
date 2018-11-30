#ifndef H_ENEMY
#define H_ENEMY

class Enemy{
    protected:
        int attackPower;
    public:
        virtual void attack()=0;
        void setAttackPower(int a);
        virtual void gritar() = 0;
};

#endif