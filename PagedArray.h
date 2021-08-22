//
// Created by Michael on 21/8/2021.
//

#ifndef EXTRACLASE_N1_DATOS_II_PAGEDARRAY_H
#define EXTRACLASE_N1_DATOS_II_PAGEDARRAY_H

#endif //EXTRACLASE_N1_DATOS_II_PAGEDARRAY_H

#include "fstream"
#include <iostream>

class PagedArray{
public:
    PagedArray(int *completeArray);
    int& operator[](int);

public:
    int pageArray[256];
    int *completeArray;
};
