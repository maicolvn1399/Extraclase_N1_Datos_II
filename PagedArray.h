//
// Created by Michael on 21/8/2021.
//

#ifndef EXTRACLASE_N1_DATOS_II_PAGEDARRAY_H
#define EXTRACLASE_N1_DATOS_II_PAGEDARRAY_H

#endif //EXTRACLASE_N1_DATOS_II_PAGEDARRAY_H

#include "fstream"
#include <iostream>

/**
 * @file PagedArray.h
 * @author Michael Valverde
 * @brief Clase que sobrecarga el operador subscript "[ ]" para obtener páginas de un array
 * @version 1.0
 * @date 22/08/2021
 */

class PagedArray{
public:
    /**
     * @brief Constructor de la clase PagedArray
     * @param *completeArray array que contiene las 6 páginas a ordenar
     */
    PagedArray(int *completeArray);

    /**
     * @brief método que se encarga de sobrecargar el operador [] y obtiene un integer
     * @param int n, indica el número de pagina a obtener
     * @return int, que representa el límite de la página escogida por usuario
     */
    int& operator[](int);

public:
    int pageArray[6];
    int *completeArray;
};
