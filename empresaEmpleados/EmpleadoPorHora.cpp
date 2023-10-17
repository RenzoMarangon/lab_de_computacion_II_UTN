#include "EmpleadoPorHora.h"

int EmpleadoPorHora::getPrecioHora() const { return _precioHora; }
void EmpleadoPorHora::setPrecioHora(int precioHora) { _precioHora = precioHora; }

int EmpleadoPorHora::getCantidadHoras() const { return _cantidadHoras; }
void EmpleadoPorHora::setCantidadHoras(int cantidadHoras) { _cantidadHoras = cantidadHoras; }

std::string EmpleadoPorHora::toString() const { return std::to_string( _precioHora * _cantidadHoras );}

int EmpleadoPorHora::getSalario() const{ return _precioHora * _cantidadHoras;}

