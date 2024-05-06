#ifndef VEHICULO_H
#define VEHICULO_H

#include "StackableObject.h"

class Vehiculo : public StackableObject {
public:
    Vehiculo(int cantRuedas, bool tieneBaul, int cilindraje);

    int getCantRuedas() const;
    bool getTieneBaul() const;
    int getCilindraje() const;

    void setCantRuedas(int cantRuedas);
    void setTieneBaul(bool tieneBaul);
    void setCilindraje(int cilindraje);

    void mostrar() const;

private:
    int cantRuedas;
    bool tieneBaul;
    int cilindraje;
};

#endif // VEHICULO_H
