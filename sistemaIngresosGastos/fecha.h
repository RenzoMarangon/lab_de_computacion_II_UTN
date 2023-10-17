#pragma once
#include <string>

class Fecha
{
    public:
        void setDia( int dia );
        void setMes( int mes );
        void setAnio( int anio );
        int getDia();
        int getMes();
        int getAnio();
        std::string toString();
        std::string getNombreDia();
        int cuantosDiasTieneMes(int mes);
        void sumarDia();
        void restarDia();
        void sumarMes();
        void restarMes();
        void restarDias(int cantDias);
        void sumarDias(int cantDias);
        Fecha();
        Fecha( int dia, int mes, int anio);
    private:
        int _dia;
        int _mes;
        int _anio;
        int _diaSemana;
};