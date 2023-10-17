#include "persona.h"

#include <iostream>

void Persona::setApellido( std::string apellido)
{
    _apellido = apellido;
}

void Persona::setNombre( std::string nombre)
{
    _nombre = nombre;
}

std::string Persona::getApellido()
{
    return _apellido;
}


std::string Persona::getNombre()
{
    return _nombre;
}

std::string Persona::toString()
{
    return _apellido + " " + _nombre;
}

Persona::Persona()
{
    setApellido("");
    setNombre("");
}

Persona::Persona( std::string apellido, std::string nombre)
{
    setApellido(apellido);
    setNombre(nombre);
}

