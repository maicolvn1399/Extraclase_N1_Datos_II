//
// Created by Michael on 24/8/2021.
//

#ifndef EXTRACLASE_N1_DATOS_II_REPLACEMENTALG_H
#define EXTRACLASE_N1_DATOS_II_REPLACEMENTALG_H

#endif //EXTRACLASE_N1_DATOS_II_REPLACEMENTALG_H

/**
 * @file ReplacementAlg.h
 * @author Michael Valverde
 * @brief Clase de reemplazo de páginas del arreglo
 * @version 1.0
 * @date 24/08/2021
 */


class ReplacementAlg{

public:
    /**
     * @brief Constructor de clase ReplacementAlg
     * @param CompleteArray Array de números enteros
     * @param InitialPage Página inicial del array
     */

    ReplacementAlg(int *completeArray, int initialPage);

public:

    int *completeArray;
    int initialPage;

    /**
     *@brief Se encarga de reemplazar páginas y que se ejecute el algoritmo quicksort
     */
    void replace();
};