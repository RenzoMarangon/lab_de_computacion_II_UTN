#include "gasto.h"

Gasto::Gasto() 
    : Ticket(), _idMetodoPago(0), _establecimiento("") 
{}

Gasto::Gasto(int idTransaccion, const std::string& descripcion, const Fecha& fecha, int idCategoria, int idMetodoPago, const std::string& establecimiento, float monto, bool estado)
    : Ticket(idTransaccion,  idCategoria, monto, descripcion, fecha,  estado ), _idMetodoPago(idMetodoPago), _establecimiento(establecimiento)
{}

void Gasto::setIdMetodoPago( int idMetodoPago )
{
    _idMetodoPago = idMetodoPago;
}
void Gasto::setEstablecimiento( std::string establecimiento )
{
    _establecimiento = establecimiento;
}

int Gasto::getIdMetodoPago() const
{
    return _idMetodoPago;
}
std::string Gasto::getEstablecimiento() const
{
    return _establecimiento;
}
std::string Gasto::toString () const
{
    return Ticket::toString() + " ID metodo de pago "+ std::to_string( _idMetodoPago ) + " " + _establecimiento ;
}