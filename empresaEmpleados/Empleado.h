#pragma once
#include <string>

class Empleado
{
    protected:
        std::string _nombre;
        std::string _apellido;
        std::string _email;
        int _legajo;

    public:
        
        std::string getNombre() const;
        void setNombre(const std::string &nombre);

        std::string getApellido() const;
        void setApellido(const std::string &apellido);

        std::string getEmail() const;
        void setEmail(const std::string &email);

        int getLegajo() const;
        void setLegajo(int legajo);
    
        std::string toString() const;
        
};