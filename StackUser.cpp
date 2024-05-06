#include "StackUser.h"
#include <iostream>
#include <random>
#include "Vehiculo.h"
#include "Departamento.h"
#include <QDebug>

StackUser::StackUser(StackInterface *stack) : stack(stack) {}

StackUser::~StackUser() {}

void StackUser::cargarVehiculo() {
    std::random_device rd;
    std::mt19937 gen(rd());

    int cantRuedas = std::uniform_int_distribution<int>(2, 4)(gen);
    bool tieneBaul = std::uniform_int_distribution<int>(0, 1)(gen);
    int cilindraje = std::uniform_int_distribution<int>(100, 1000)(gen);

    Vehiculo* vehiculo = new Vehiculo(cantRuedas, tieneBaul, cilindraje);

    qDebug() << "\nNuevo vehículo:";
    vehiculo->mostrar();

    stack->push(vehiculo);
}

void StackUser::cargarDepartamento() {
    std::random_device rd;
    std::mt19937 gen(rd());

    int cantAmbientes = std::uniform_int_distribution<int>(1, 5)(gen);
    double precio = std::uniform_real_distribution<double>(50000, 200000)(gen);
    int piso = std::uniform_int_distribution<int>(1, 10)(gen);

    Departamento* departamento = new Departamento(cantAmbientes, precio, piso);

    qDebug() << "\nNuevo departamento:";
    departamento->mostrar();

    stack->push(departamento);
}

void StackUser::imprimirPila() {
    stack->print();
}
