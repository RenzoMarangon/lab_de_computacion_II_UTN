#pragma once
#include <string>

class Persona
{
    public:
        void setNombre( std::string nombre);
        void setApellido( std::string apellido);

        std::string getNombre();
        std::string getApellido();

        std::string toString();

        Persona();
        Persona(std::string apellido, std::string nombre);

    private:
        std::string _apellido;
        std::string _nombre;
};