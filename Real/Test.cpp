#include "Real.h"

int main()
{
    Real r = Real(13, 17);
    Real r2 = Real(13, -17);
    Real r3 = Real().suma(r, r2);

    r3.imprimir();
    return 0;
}