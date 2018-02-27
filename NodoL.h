//
// Created by daniel on 2/26/18.
//

#ifndef EXAMENPARCIAL1_NODOL_H
#define EXAMENPARCIAL1_NODOL_H

#include <iostream>

class NodoL {
public:
    int valueN;
    NodoL *sig;
    NodoL *ant;
    NodoL(int valueN);
    ~NodoL();
};


#endif //EXAMENPARCIAL1_NODOL_H
