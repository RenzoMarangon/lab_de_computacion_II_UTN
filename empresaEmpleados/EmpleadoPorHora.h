#include <string>
#include "Empleado.h"

class EmpleadoPorHora : public Empleado
{
    protected:
        int _precioHora;
        int _cantidadHoras;

    public:
        
        int getPrecioHora() const;
        void setPrecioHora(int precioHora);

        int getCantidadHoras() const;
        void setCantidadHoras(int cantidadHoras);

        int getSalario() const;
        std::string toString() const;
        
};