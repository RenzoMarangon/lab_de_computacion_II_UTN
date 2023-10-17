#include "ticket.h"


class Gasto
    : public Ticket 
{    
    private:
        int _idMetodoPago;
        std::string _establecimiento;

    public:

        Gasto();
        Gasto(int idTransaccion, const std::string& descripcion, const Fecha& fecha, int idCategoria, int idMetodoPago, const std::string& establecimiento, float monto, bool estado);

        void setIdMetodoPago( int idMetodoPago );
        void setEstablecimiento ( std::string establecimiento );

        int getIdMetodoPago    () const;
        std::string getEstablecimiento () const;
        std::string toString () const;
        
};
