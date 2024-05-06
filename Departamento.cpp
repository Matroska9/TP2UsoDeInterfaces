#include "Departamento.h"
#include <QDebug>

Departamento::Departamento(int cantAmbientes, double precio, int piso)
    : cantAmbientes(cantAmbientes), precio(precio), piso(piso) {}

int Departamento::getCantAmbientes() const {
    return cantAmbientes;
}

double Departamento::getPrecio() const {
    return precio;
}

int Departamento::getPiso() const {
    return piso;
}

void Departamento::setCantAmbientes(int cantAmbientes) {
    this->cantAmbientes = cantAmbientes;
}

void Departamento::setPrecio(double precio) {
    this->precio = precio;
}

void Departamento::setPiso(int piso) {
    this->piso = piso;
}

void Departamento::mostrar() const {
    qDebug()  << "Cantidad de ambientes: " << cantAmbientes << "   ||   Precio: $" << precio << "   ||   Piso: " << piso;
}
