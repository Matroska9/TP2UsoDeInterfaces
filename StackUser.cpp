#include "StackUser.h"
#include <iostream>
#include <random>
#include "Vehiculo.h"

StackUser::StackUser(StackInterface *stack) : stack(stack) {}

StackUser::~StackUser() {}

void StackUser::cargarPila() {
    std::random_device rd;
    std::mt19937 gen(rd());

    for (int i = 0; i < 5; ++i) {
        int cantRuedas = std::uniform_int_distribution<int>(2, 4)(gen);
        bool tieneBaul = std::uniform_int_distribution<int>(0, 1)(gen);
        int cilindraje = std::uniform_int_distribution<int>(100, 1000)(gen);

        Vehiculo* vehiculo = new Vehiculo(cantRuedas, tieneBaul, cilindraje);

        stack->push(vehiculo);
    }
}

void StackUser::imprimirPila() {
    std::cout << "Elementos en la pila:" << std::endl;
    int count = stack->getCount();
    for (int i = 0; i < count; ++i) {
        StackableObject *object = stack->pop();
        object->mostrar();
        stack->push(object);
    }
}
