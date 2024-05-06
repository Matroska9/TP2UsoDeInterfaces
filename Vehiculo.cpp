#include "Vehiculo.h"
#include <iostream>

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
    std::cout << "Cantidad de ruedas: " << cantRuedas << std::endl;
    std::cout << "Tiene baúl: " << (tieneBaul ? "Sí" : "No") << std::endl;
    std::cout << "Cilindraje: " << cilindraje << " cc" << std::endl;
}
