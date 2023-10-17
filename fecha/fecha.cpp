#include "fecha.h"
#include <ctime>
#include <iostream>

void Fecha::setDia( int dia )
{
    _dia = dia;
}
void Fecha::setMes( int mes )
{
    _mes = mes;
}
void Fecha::setAnio( int anio )
{
    _anio = anio;
}
int Fecha::getDia()
{
    return _dia;
}
int Fecha::getMes()
{
    return _mes;
}
int Fecha::getAnio()
{
    return _anio;
}
std::string Fecha::toString()
{
    return std::to_string( _dia ) + "/" + std::to_string( _mes ) + "/" + std::to_string( _anio );
}

std::string Fecha::getNombreDia()
{
    std::string dias[7]= {"domingo", "lunes", "martes", "miercoles", "jueves", "viernes", "sabado"};
    
    if(_diaSemana >= 0 && _diaSemana<=6)
    {
        return dias[_diaSemana];
    }

    return "";
}

int Fecha::cuantosDiasTieneMes( int mes )
{
    if( mes >=1 && mes <= 12  )
    {
        int mesesConTreinta[4] = { 4, 6, 9, 11 }; 

        if( mes == 2 ) return 28;

        for(int i = 0; i < 4; i++)
        {
            if( mes == mesesConTreinta[i] ) return 30;
        }

        return 31;

    }else{

        return -1;
    }
}

void Fecha::sumarMes()
{
    if( _mes < 12)
    {
        _mes++;
    }else{
        _mes = 1;
        _anio++;
    }
}

void Fecha::sumarDia()
{
    int cantDiasMes;
    
    switch ( cuantosDiasTieneMes(_mes) )
    {
    case 30:
        if( _dia >= 30)
        {
            _dia = 1;
            sumarMes();
        }else{
            _dia++;
        }
        break;
    case 31:

        if( _dia >= 31)
        {
            _dia = 1;
            sumarMes();
        }else{
            _dia++;
        }

        break;
    
    case 28:

        if( _dia >= 28)
        {
            _dia = 1;

            sumarMes();
        }else{
            _dia++;
        }

        break;
    default:

        std::cout << "Ese mes no existe";
        break;
    }


}

void Fecha::restarMes()
{
    if( _mes == 1)
    {
        _mes = 12;
        _anio--;
    }else{
        _mes --;
    }
}

void Fecha::restarDia()
{
 int cantDiasMes;
    
    if( _dia == 1)
    {
        restarMes(); 
    }

    switch ( cuantosDiasTieneMes(_mes) )
    {
    case 30:
        if( _dia == 1)
        {
            _dia = 30;

        }else{
            _dia--;
        }
        break;
    case 31:

        if( _dia == 1)
        {
            _dia = 31;
            
        }else{
            _dia--;
        }

        break;
    
    case 28:

        if( _dia == 28)
        {
            _dia = 28;

            
        }else{
            _dia--;
        }

        break;
    default:

        std::cout << "Ese mes no existe";
        break;
    }


}

void Fecha::restarDias(int cantDias)
{
    for(int i = 0; i < cantDias; i++)
    {
        restarDia();
    }
}

void Fecha::sumarDias(int cantDias)
{
    for(int i = 0; i < cantDias; i++)
    {
        sumarDia();
    }
}

Fecha::Fecha()
{
    time_t t = time(NULL);
    struct  tm *f = localtime(&t);

    setDia((f->tm_mday));
    setMes(int(f->tm_mon + 1));
    setAnio(int(f->tm_year + 1900));
    _diaSemana = int(f-> tm_wday);

    
}

Fecha::Fecha(int dia, int mes, int anio)
{   
    setDia( dia );
    setMes( mes );
    setAnio( anio );
    _diaSemana =- 1;
}

