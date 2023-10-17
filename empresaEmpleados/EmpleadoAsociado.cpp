#include "EmpleadoAsociado.h"
#include "fecha.h"

int EmpleadoAsociado::getAnioDeIngreso() const { return _anioDeIngreso; }
void EmpleadoAsociado::setAnioDeIngreso(int anioDeIngreso) { _anioDeIngreso = anioDeIngreso; }

int EmpleadoAsociado::getAntiguedad() const {
    return Fecha().getAnio() - _anioDeIngreso;
}


int EmpleadoAsociado::getSueldo() const {
    int bonificacion;
    float sueldoFijo;
    int antiguedad = getAntiguedad();

    if( antiguedad > 20)
    {
       bonificacion = 1.5;
    }
    else if (antiguedad > 15){
        bonificacion = 1.2;
    }
    else if (antiguedad > 5){
        bonificacion = 1.1;
    }

    return sueldoFijo * bonificacion;
}

int EmpleadoAsociado::getSalarioFijo() const { return _salarioFijo; }
void EmpleadoAsociado::setSalarioFijo(int salarioFijo) { _salarioFijo = salarioFijo; }
