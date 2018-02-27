//
// Created by daniel on 2/26/18.
//

#ifndef EXAMENPARCIAL1_LDE_H
#define EXAMENPARCIAL1_LDE_H

#include "NodoL.h"

class LDE {
public:
    NodoL *first;
    NodoL *last;
    int cantelem;
    void add(NodoL *n);
    void borrar(int n);
    void SortLista();
    int getNodoL(int pos);
    int MaxRep();
    int MaxDif();
    LDE();
};


#endif //EXAMENPARCIAL1_LDE_H
