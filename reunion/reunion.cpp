#include "reunion.h"
#include "iostream"

FechaHorario Reunion::getFechaHorario()
{
    return _fechaHorario;
}

std::string Reunion::getLugar()
{
    return _lugar;
}
std::string Reunion::getTema()
{
    return _tema;
}

int Reunion::getDuracion()
{
    return _duracion;
}
int Reunion::getCantidadIntegrantes()
{
    return _cantidadIntegrantes;
}

Persona Reunion::getIntegrante(int indice)
{
    return _integrantes[indice];
}

std::string Reunion::getIntegrantes_toString()
{
    std::string aux = "";
    
    for( int i = 0; i < _cantidadIntegrantes; i++ )
    {
        aux += _integrantes[i].toString() + " ";
       
    }

    return aux;
}

std::string Reunion::toString()
{
    return _fechaHorario.toString() + " " + _lugar + " " + _tema + " " +  std::to_string( _duracion ) + " " + getIntegrantes_toString(); 
}

void Reunion::setFechaHorario(FechaHorario fechaHorario)
{
    _fechaHorario = fechaHorario;
}

void Reunion::setLugar(std::string lugar)
{
    _lugar = lugar;
}

void Reunion::setTema(std::string tema)
{
    _tema = tema;
}
void Reunion::setDuracion(int duracion)
{
    _duracion = duracion;
}

void Reunion::setIntegrante(Persona integrante, int indice)
{
    _integrantes[ indice ] = integrante;
}

Reunion::Reunion(int cantidadIntegrantes)
{
    if( cantidadIntegrantes > 0)
    {
        _integrantes = nullptr;
        _integrantes = new Persona[cantidadIntegrantes];

        if( _integrantes == nullptr)
        {
            _cantidadIntegrantes = 0;
        }else{
            _cantidadIntegrantes = cantidadIntegrantes;
        }
    }else{
        _cantidadIntegrantes = 0;
    }

    _duracion = 0;
    _tema = "";
    _lugar = "";
}

Reunion::~Reunion()
{
    if(_cantidadIntegrantes > 0)
    {
        delete []_integrantes;
    }
}