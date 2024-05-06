#include "Vehiculo.h"
#include <QDebug>

Vehiculo::Vehiculo(int cantRuedas, bool tieneBaul, int cilindraje)
    : cantRuedas(cantRuedas), tieneBaul(tieneBaul), cilindraje(cilindraje) {}

int Vehiculo::getCantRuedas() const {
    return cantRuedas;
}

bool Vehiculo::getTieneBaul() const {
    return tieneBaul;
}

int Vehiculo::getCilindraje() const {
    return cilindraje;
}

void Vehiculo::setCantRuedas(int cantRuedas) {
    this->cantRuedas = cantRuedas;
}

void Vehiculo::setTieneBaul(bool tieneBaul) {
    this->tieneBaul = tieneBaul;
}

void Vehiculo::setCilindraje(int cilindraje) {
    this->cilindraje = cilindraje;
}

void Vehiculo::mostrar() const {
    qDebug()  << "Cantidad de ruedas: " << cantRuedas << "   ||   Tiene baúl: " << (tieneBaul ? "Sí" : "No") << "   ||   Cilindraje: " << cilindraje << " cc";
}
