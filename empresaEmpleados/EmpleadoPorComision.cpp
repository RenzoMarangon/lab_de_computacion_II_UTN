#include "EmpleadoPorComision.h"

float EmpleadoPorComision::getTotalVendido() const { return _totalVendido; }
void EmpleadoPorComision::setTotalVendido(float totalVendido) { _totalVendido = totalVendido; }

float EmpleadoPorComision::getPorcentajeComision() const { return _porcentajeComision; }
void EmpleadoPorComision::setPorcentajeComision(float porcentajeComision) { _porcentajeComision = porcentajeComision; }

std::string EmpleadoPorComision::toString() const {return "Total vendido: " + std::to_string( _totalVendido ) + " " + " Porcentaje de comsion: " + std::to_string( _porcentajeComision );}