class Mother
{
    public:
        Mother();
        void sayHi();
        int getSomeVar();
        ~Mother();
    private:
        int var;
    protected:
        int someVar;
};

class Daughter:public Mother
{
    public:
        Daughter();
        ~Daughter();
};