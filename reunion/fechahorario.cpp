#include "fechahorario.h"

Fecha FechaHorario::getFecha()
{
    return _fecha;
}

Horario FechaHorario::getHorario()
{
    return _horario;
}

void FechaHorario::setFecha(Fecha fecha)
{
    _fecha = fecha;
}

void FechaHorario::setFecha(int dia, int mes, int anio)
{
    _fecha.setDia( dia );
    _fecha.setMes( mes );
    _fecha.setAnio( anio );
}


void FechaHorario::setHorario( Horario horario )
{
    _horario = horario;
}

void FechaHorario::setHorario(int segundo, int minuto, int hora)
{
    _horario.setSegundos( segundo );
    _horario.setMinutos( minuto );
    _horario.setHoras( hora );
}

std::string FechaHorario::toString()
{
    return _horario.toString() + " " + _fecha.toString();
}

FechaHorario::FechaHorario()
{
    Fecha fecha;
    Horario horario;
    _fecha = fecha;
    _horario = horario;
}

FechaHorario::FechaHorario(Fecha fecha, Horario horario)
{
    _fecha = fecha;
    _horario = horario;
}

FechaHorario::FechaHorario(int dia, int mes, int anio, int segundo, int minuto, int hora)
{
    _fecha.setDia( dia );
    _fecha.setMes( mes );
    _fecha.setAnio( anio );
    _horario.setSegundos( segundo );
    _horario.setMinutos( minuto );
    _horario.setHoras( hora );
}

