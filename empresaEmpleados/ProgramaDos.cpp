#include "ProgramaDos.h"
#include <iostream>
using namespace std;

std::string ProgramaDos::getTitulo() const {
  return _titulo;
}

void ProgramaDos::setTitulo(const std::string &titulo) {
  _titulo = titulo;
}

EmpleadoAsalariado ProgramaDos::crearEmpleadoAsalariado() const{
  EmpleadoAsalariado aux;
  aux.setLegajo(1000);
  aux.setEmail("noeselmaildefiorella@gmail.com");
  aux.setApellido("Gonzalez");
  aux.setNombre("Fiorella");
  aux.setSalario(900000);
  return aux;
}

EmpleadoPorHora ProgramaDos::crearEmpleadoPorHora() const{
  EmpleadoPorHora aux;
  aux.setLegajo(2000);
  aux.setEmail("nomeescriban@gmail.com");
  aux.setApellido("Lancieri");
  aux.setNombre("Charlie");
  aux.setPrecioHora(5000);
  aux.setCantidadHoras(100);
  return aux;
}

EmpleadoAsociado ProgramaDos::crearEmpleadoAsociado() const{
  EmpleadoAsociado aux;
  aux.setLegajo(3000);
  aux.setEmail("soyasociado@gmail.com");
  aux.setApellido("Benitez");
  aux.setNombre("Mariano");
  aux.setSalarioFijo(1000000);
  aux.setAnioDeIngreso(2016);
  return aux;
}

void ProgramaDos::Ejecutar() const{
  Empleado nomina[3];
  nomina[0] = crearEmpleadoAsalariado();
  nomina[1] = crearEmpleadoPorHora();
  nomina[2] = crearEmpleadoAsociado();

  cout << _titulo << endl;
  cout << "--------------------------" << endl;
  int i;
  for(i=0; i<3; i++){
    cout << nomina[i].getApellido() << " " << nomina[i].getLegajo() << endl;
  }
}