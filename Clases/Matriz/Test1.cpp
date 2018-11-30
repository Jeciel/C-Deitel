#include "Matriz.h"
#include <iostream>

int main(){
    Matriz n;
    Matriz m = Matriz(3);
    amiga(m);
    Matriz res = m+n;
    res.~Matriz();

    return 0;
}