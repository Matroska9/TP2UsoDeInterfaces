#ifndef DEPARTAMENTO_H
#define DEPARTAMENTO_H

#include "StackableObject.h"

class Departamento : public StackableObject {
public:
    Departamento(int cantAmbientes, double precio, int piso);

    int getCantAmbientes() const;
    double getPrecio() const;
    int getPiso() const;

    void setCantAmbientes(int cantAmbientes);
    void setPrecio(double precio);
    void setPiso(int piso);

    void mostrar() const;

private:
    int cantAmbientes;
    double precio;
    int piso;
};


#endif // DEPARTAMENTO_H
