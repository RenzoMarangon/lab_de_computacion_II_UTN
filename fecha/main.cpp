#include <iostream>
#include "fecha.h"


int main()
{
    Fecha fecha;
    fecha.restarDias(2);
    std::cout << fecha.toString();
    
    
    return 0;
}
