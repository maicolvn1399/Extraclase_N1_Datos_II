//
// Created by Michael on 18/8/2021.
//

#include "string"

#ifndef EXTRACLASE_N1_DATOS_II_PERRO_H
#define EXTRACLASE_N1_DATOS_II_PERRO_H

#endif //EXTRACLASE_N1_DATOS_II_PERRO_H

class Perro {

public:
    Perro(const std::string &raza, int edad);

    const std::string &getRaza() const;

    void setRaza(const std::string &raza);

    int getEdad() const;

    void setEdad(int edad);

private:
    std::string _raza;
    int _edad;
};
