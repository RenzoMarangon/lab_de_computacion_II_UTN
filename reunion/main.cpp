#include "reunion.h"
#include <iostream>


int main()
{
    Reunion reunion(2);

    Persona unaspardes[2] = { Persona("McFly","Jorge"), Persona("Rompeloma","Abelardo")};

    reunion.setIntegrante( unaspardes[0], 0 );
    reunion.setIntegrante( unaspardes[1], 1 );

    std::cout << reunion.toString();
    return 0;
}