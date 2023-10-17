#pragma once
#include <string>
#include "fecha.h"

class Ticket
{
    private:
        int _idTransaccion, _idCategoria;
        float _monto;
        bool _estado;
        std::string _descripcion;
        Fecha _fecha;

    public:
        void setIdTransaccion   ( int idTransaccion );
        void setIdCategoria     ( int idCategoria );
        void setMonto           ( float monto );
        void setEstado          ( bool estado );
        void setDescripcion     ( std::string& descripcion );
        void setFecha           ( Fecha& fecha );

        int getIdTransaccion   () const;
        int getIdCategoria     () const;
        float getMonto         () const;
        bool getEstado         () const;
        Fecha getFecha         ()  const;
        std::string getDescripcion()  const;
        std::string toString   () const;

        Ticket();
        Ticket( int idTransaccion, int idCategoria, float monto, const std::string& descripcion, const Fecha& fecha, bool estado );
};


