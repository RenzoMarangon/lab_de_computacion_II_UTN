#include "ProgramaUno.h"
#include <iostream>
using namespace std;

std::string ProgramaUno::getTitulo() const {
  return _titulo;
}

void ProgramaUno::setTitulo(const std::string &titulo) {
  _titulo = titulo;
}

EmpleadoAsalariado ProgramaUno::crearEmpleadoAsalariado() const{
  EmpleadoAsalariado aux;
  aux.setLegajo(1000);
  aux.setEmail("noeselmaildefiorella@gmail.com");
  aux.setApellido("Gonzalez");
  aux.setNombre("Fiorella");
  aux.setSalario(900000);
  return aux;
}

EmpleadoPorHora ProgramaUno::crearEmpleadoPorHora() const{
  EmpleadoPorHora aux;
  aux.setLegajo(2000);
  aux.setEmail("nomeescriban@gmail.com");
  aux.setApellido("Lancieri");
  aux.setNombre("Charlie");
  aux.setPrecioHora(5000);
  aux.setCantidadHoras(100);
  return aux;
}

EmpleadoAsociado ProgramaUno::crearEmpleadoAsociado() const{
  EmpleadoAsociado aux;
  aux.setLegajo(3000);
  aux.setEmail("soyasociado@gmail.com");
  aux.setApellido("Benitez");
  aux.setNombre("Mariano");
  aux.setSalarioFijo(1000000);
  aux.setAnioDeIngreso(2016);
  return aux;
}

void ProgramaUno::Ejecutar(){
  int tipoEmpleado;
  cout << endl << _titulo << endl;
  cout << "--------------------------------" << endl;

  cout << "Ingresar el tipo de empleado (1-4) : ";
  cin >> tipoEmpleado;

  string datosEmpleado;
  float honorarios;

  switch(tipoEmpleado){
    case 1:
      {
        EmpleadoAsalariado e = crearEmpleadoAsalariado();
        datosEmpleado = e.toString();
        honorarios = e.getSalario();
      }
    break;
    case 2:
      {
        EmpleadoPorHora e = crearEmpleadoPorHora();
        datosEmpleado = e.toString();
        honorarios = e.getSalario();
      }
    break;
    case 3:
      {
        cout << "Te debo un EmpleadoPorComision";
        return;
      }
    break;
    case 4:
      {
        EmpleadoAsociado e = crearEmpleadoAsociado();
        datosEmpleado = e.toString();
        honorarios = e.getSueldo();
      }
    break;
  }

  cout << datosEmpleado << endl << honorarios;

}
