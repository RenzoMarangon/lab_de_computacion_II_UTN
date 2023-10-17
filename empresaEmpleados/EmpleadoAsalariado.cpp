#include "EmpleadoAsalariado.h"

int EmpleadoAsalariado::getSalario() const { return _salario; }
void EmpleadoAsalariado::setSalario(int salario) { _salario = salario; }

std::string EmpleadoAsalariado::toString() const {return std::to_string(_salario); }
