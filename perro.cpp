//
// Created by Michael on 18/8/2021.
//

#include <string>
#include "perro.h"

Perro::Perro(const std::__cxx11::basic_string<char> &raza, int edad) : _raza(raza), _edad(edad) {

}

const std::string &Perro::getRaza() const {
    return _raza;
}

void Perro::setRaza(const std::string &raza) {
    _raza = raza;
}

int Perro::getEdad() const {
    return _edad;
}

void Perro::setEdad(int edad) {
    _edad = edad;
}
