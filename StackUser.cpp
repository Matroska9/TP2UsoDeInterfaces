#include "StackUser.h"
#include <iostream>
#include <random>
#include "Vehiculo.h"
#include <QDebug>

StackUser::StackUser(StackInterface *stack) : stack(stack) {}

StackUser::~StackUser() {}

void StackUser::cargarPila() {
    std::random_device rd;
    std::mt19937 gen(rd());

    int cantRuedas = std::uniform_int_distribution<int>(2, 4)(gen);
    bool tieneBaul = std::uniform_int_distribution<int>(0, 1)(gen);
    int cilindraje = std::uniform_int_distribution<int>(100, 1000)(gen);

    Vehiculo* vehiculo = new Vehiculo(cantRuedas, tieneBaul, cilindraje);

    qDebug() << "\nNuevo elemento:";
    vehiculo->mostrar();

    stack->push(vehiculo);
}

void StackUser::imprimirPila() {
    stack->print();
}
