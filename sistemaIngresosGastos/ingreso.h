#include "ticket.h"

class Ingreso
        : public Ticket
{
    private:
        int _tipo;
        std::string _referencia;

    public:

        Ingreso();
        Ingreso( int idTransaccion, const std::string& descripcion, const Fecha& fecha, int idCategoria, int tipo, const std::string& refencia, float monto, bool estado );

        void setTipo      ( int tipo );
        void setReferencia ( std::string referencia );

        int getTipo      () const;
        std::string getReferencia () const;

        std::string toString() const;

};