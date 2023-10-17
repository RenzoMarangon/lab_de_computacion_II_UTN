#include <string>
#include <iostream>
using namespace std;

#include "sistema.h"
#include "gasto.h"
#include "ingreso.h"

void Sistema::cargarTransacciones()
{
  _gastos[0] = Gasto(1, "Comida", Fecha(2, 2, 2023), 1, 1, "Pedidos Ya", 20000, true);
  _gastos[1] = Gasto(2, "Comida", Fecha(2, 1, 2023), 1, 1, "Pedidos Ya", 15000, true);
  _gastos[2] = Gasto(3, "Comida", Fecha(2, 2, 2023), 1, 1, "Pedidos Ya", 200, true);
  _gastos[3] = Gasto(4, "Comida", Fecha(2, 2, 2023), 1, 1, "Pedidos Ya", 500, true);
  _gastos[4] = Gasto(5, "Comida", Fecha(2, 3, 2023), 1, 1, "Pedidos Ya", 25000, true);

  _ingresos[0] = Ingreso(1, "Desarrollo", Fecha(2, 2, 2023), 1, 1, "Pedidos Ya", 20000, true);
  _ingresos[1] = Ingreso(2, "Desarrollo", Fecha(2, 1, 2023), 1, 1, "Pedidos Ya", 15000, true);
  _ingresos[2] = Ingreso(3, "Desarrollo", Fecha(2, 2, 2023), 1, 1, "Pedidos Ya", 200, true);
  _ingresos[3] = Ingreso(4, "Desarrollo", Fecha(2, 2, 2023), 1, 1, "Pedidos Ya", 500, true);
  _ingresos[4] = Ingreso(5, "Desarrollo", Fecha(2, 3, 2023), 1, 1, "Pedidos Ya", 25000, true);

  /*
  for (int i = 0; i < 5; i++) {
    _gastos[i] = cargarGasto();
    //_gastos[i].cargar();
  }
  */
}


void Sistema::mostrarGastos()
{
    for( int i = 0; i<5; i++ )
    {
        std::cout << _gastos[i].toString() << std::endl;
    }
}


void Sistema::mostrarMayorIngreso()
{
    Gasto ingresoMayor = _gastos[0];

    for( int i = 1; i<5; i++)
    {
        if( _gastos[i].getMonto() > ingresoMayor.getMonto() )
        {
            ingresoMayor = _gastos[i];
        }
    }

    std::cout << "El mayor ingreso fue de " << std::to_string( ingresoMayor.getMonto()) << std::endl;
} 


void Sistema::mostrarSaldo()
{
    int saldo;

    for(Ingreso ingreso:_ingresos)
    {
        saldo += ingreso.getMonto();
    }

    for(Gasto gasto:_gastos)
    {
        saldo-= gasto.getMonto();
    }

    std::cout << "El saldo es de: " << std::to_string( saldo ) << std::endl;
}


Gasto Sistema::cargarGasto()
{
  int idTransaccion, dia, mes, anio, idCategoria, idMetodoPago;
  std::string descripcion, establecimiento;
  float importe;
  bool estado;
  
  cout << "Ingrese ID de transaccion: ";
  cin >> idTransaccion;

  cout << "Ingrese descripcion: ";
  cin.ignore();
  getline(cin, descripcion);

  cout << "Ingrese dia: ";
  cin >> dia;

  cout << "Ingrese mes: ";
  cin >> mes;

  cout << "Ingrese anio: ";
  cin >> anio;

  cout << "Ingrese categoria: ";
  cin >> idCategoria;

  cout << "Ingrese forma de pago: ";
  cin >> idMetodoPago;

  cout << "Ingrese establecimiento: ";
  cin.ignore();
  getline(cin, establecimiento);

  cout << "Ingrese importe: ";
  cin >> importe;

  estado = true;

  return Gasto(idTransaccion, descripcion, Fecha(dia, mes, anio), idCategoria, idMetodoPago, establecimiento, importe, estado);
}


Ingreso Sistema::cargarIngreso()
{
  int idTransaccion, dia, mes, anio, idCategoria, tipo;
  std::string descripcion, referencia;
  float importe;
  bool estado;
  
  cout << "Ingrese ID de transaccion: ";
  cin >> idTransaccion;

  cout << "Ingrese descripcion: ";
  cin.ignore();
  getline(cin, descripcion);

  cout << "Ingrese dia: ";
  cin >> dia;

  cout << "Ingrese mes: ";
  cin >> mes;

  cout << "Ingrese anio: ";
  cin >> anio;

  cout << "Ingrese categoria: ";
  cin >> idCategoria;

  cout << "Ingrese el tipo de ingreso: ";
  cin >> tipo;

  cout << "Ingrese la referencia: ";
  cin.ignore();
  getline(cin, referencia);

  cout << "Ingrese importe: ";
  cin >> importe;

  estado = true;

  return Ingreso(idTransaccion, descripcion, Fecha(dia, mes, anio), idCategoria, tipo, referencia, importe, estado);
}