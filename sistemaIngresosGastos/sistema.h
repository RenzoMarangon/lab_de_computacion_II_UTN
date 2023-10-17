#pragma once
#include "gasto.h"
#include "ingreso.h"
class Sistema
{
    public:
        void cargarTransacciones();
        void mostrarGastos();
        void mostrarMayorIngreso(); 
        void mostrarSaldo(); 
        Gasto cargarGasto();
        Ingreso cargarIngreso();

    private:
        Gasto _gastos[5];
        Ingreso _ingresos[5];
};