#include "Mother.h"
#include <iostream>

int main(){

    Mother m; //Mother Created
    m.sayHi();

    Daughter d;
    d.sayHi();

    std::cout<<d.getSomeVar()<<std::endl;
    m.~Mother(); // Killing mother 
    d.~Daughter();// Killing Daughter // Killing Mother
    return 0;

}