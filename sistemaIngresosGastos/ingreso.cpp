#include "ingreso.h"

Ingreso::Ingreso()
    : Ticket(), _tipo(0), _referencia("")
{}

Ingreso::Ingreso(int idTransaccion, const std::string& descripcion, const Fecha& fecha, int idCategoria, int tipo, const std::string& refencia, float monto, bool estado )
    : Ticket(idTransaccion, idCategoria, monto, descripcion, fecha, estado), _tipo(0), _referencia("")
{}

int Ingreso::getTipo() const
{
    return _tipo;
}

std::string Ingreso::getReferencia() const
{
    return _referencia;
}


void Ingreso::setTipo( int tipo)
{
    _tipo = tipo;
}

void Ingreso::setReferencia( std::string referencia)
{
    _referencia = referencia;
}

std::string Ingreso::toString() const
{
    return Ticket::toString() + " tipo: " + std::to_string(_tipo) + " referencia: " + _referencia;
}
