#pragma once
#include <string>

#include "Empleado.h"


class EmpleadoPorComision : public Empleado
{
    protected:
        float _totalVendido;
        float _porcentajeComision;

    public:
        
        float getTotalVendido() const;
        void setTotalVendido(float totalVendido);

        float getPorcentajeComision() const;
        void setPorcentajeComision(float porcentajeComision) ;
    
        std::string toString() const;
};