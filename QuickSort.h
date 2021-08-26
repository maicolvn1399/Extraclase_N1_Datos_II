//
// Created by Michael on 19/8/2021.
//


#ifndef TAREA1_QUICKSORT_H
#define TAREA1_QUICKSORT_H

using namespace std;

/**
 * @file Quicksort.h
 * @author Michael Valverde
 * @brief Clase que implementa el algoritmo Quicksort para ordenar integers de un array
 * @version 1.0
 * @date 21/08/2021
 */

class QuickSort{
public:
    /**
     *@brief imprime los elementos del array en consola
     *@param array array que toma los elementos para ser impresos en consola
     *@param i int que representa el límite de hasta donde el método imprime los elementos del array
     */
    static void printArray(int *, int );

    /**
     *@brief ejecuta el algoritmo quicksort
     *@param array array a ordenar
     *@param low int que representa la posición baja de donde el algoritmo debe empezar a ordenar los elementos
     *@param high int que representa el límite de donde el algoritmo debe parar de ordenar los elementos
     */
    static void quicksort(int *, int , int );

public:
    int n;
    int i;
};

#endif //TAREA1_QUICKSORT_H