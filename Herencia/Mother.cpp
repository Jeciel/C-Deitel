#include <iostream>
#include "Mother.h"

Mother::Mother():someVar(0),var(0){
    std::cout<<"Mother Created"<<std::endl;
};

void Mother::sayHi(){
    std::cout<<"Hi"<<std::endl;
}

int Mother::getSomeVar(){
    return someVar;
}

Mother::~Mother(){
    std::cout<<"Killing Mother"<<std::endl;
}

Daughter::Daughter(){
    std::cout<<"Daughter Created"<<std::endl;
    someVar++;
};

Daughter::~Daughter(){
    std::cout<<"Killing Daughter"<<std::endl;
}
