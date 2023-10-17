#include "horario.h"
#include <ctime>

void Horario::setSegundos(int segundos)
{
    _segundos = segundos;
}
void Horario::setMinutos(int minutos)
{
    _minutos = minutos;
}
void Horario::setHoras(int horas)
{
    _horas = horas;
}
int Horario::getSegundos()
{
    return _segundos;
}
int Horario::getMinutos()
{
    return _minutos;
}
int Horario::getHoras()
{
    return _horas;
}
std::string Horario::toString()
{
    return std::to_string(_horas) + ":" + std::to_string(_minutos) + ":" + std::to_string(_segundos);
}

Horario::Horario()
{
    time_t t = time(NULL);
    struct  tm *f = localtime(&t);
    _segundos = f->tm_sec;
    _minutos = f->tm_min;
    _horas = f->tm_hour;
}

Horario::Horario(int segundos, int minutos, int horas)
{
    setSegundos( segundos );
    setMinutos( minutos );
    setHoras( horas );
}