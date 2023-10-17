#include "ticket.h"
#include <iostream>

void Ticket::setIdTransaccion(int idTransaccion)
{
    _idTransaccion = idTransaccion;
}

void Ticket::setIdCategoria(int idCategoria)
{
    _idCategoria = idCategoria;
}

void Ticket::setMonto(float monto)
{
    _monto = monto;
}
void Ticket::setEstado(bool estado)
{
    _estado = estado;
}
void Ticket::setDescripcion(std::string& descripcion)
{
    _descripcion = descripcion;
}

void Ticket::setFecha( Fecha& fecha)
{
    _fecha = fecha;
}

int Ticket::getIdTransaccion() const
{
    return _idTransaccion;
}

int Ticket::getIdCategoria() const
{
    return _idCategoria;
}

float Ticket::getMonto() const
{
    return _monto;
}

bool Ticket::getEstado() const
{
    return _estado;
}
std::string Ticket::getDescripcion() const
{
    return _descripcion;
}


Fecha Ticket::getFecha() const
{
    return _fecha;
}

std::string Ticket::toString() const
{
    return "id transaccion: " + std::to_string(_idTransaccion) + " descripcion: " + _descripcion + " monto: " + std::to_string(_monto);
}

Ticket::Ticket()
{
    _idTransaccion = 0;
    _idCategoria = 0;
    _monto = 0;
    _descripcion = "";
    _fecha = Fecha();
    _estado = true;
}

Ticket::Ticket( int idTransaccion, int idCategoria, float monto, const std::string& descripcion, const Fecha& fecha, bool estado )
{
   _idTransaccion = idTransaccion;
   _idCategoria = idCategoria;
   _monto = monto;
   _descripcion = descripcion;
   _fecha = fecha;
   _estado = estado;   
}
