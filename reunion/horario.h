#pragma once
#include <string>

class Horario
{
    public:
        void setSegundos(int segundos);        
        void setMinutos(int minutos);        
        void setHoras(int horas);
        int getSegundos();        
        int getMinutos();
        int getHoras();
        std::string toString();
        Horario();
        Horario( int segundos, int minutos, int horas);

    private:
        int _segundos;
        int _minutos;
        int _horas;
};