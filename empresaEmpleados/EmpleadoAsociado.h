#pragma once
#include <string>
#include "Empleado.h"

class EmpleadoAsociado : public Empleado
{
    protected:
        int _anioDeIngreso;
        int _salarioFijo;
        int getAntiguedad() const;
    public:
    
    int getAnioDeIngreso() const;
    void setAnioDeIngreso(int anioDeIngreso);
        
    int getSueldo() const;

    int getSalarioFijo() const;
    void setSalarioFijo(int salarioFijo);
};


