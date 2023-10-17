#include <string>
#include "Empleado.h"

class EmpleadoAsalariado : public Empleado
{
    protected:
        int _salario;
    public:
        int getSalario() const;
        void setSalario(int salario);
        std::string toString() const;
};


