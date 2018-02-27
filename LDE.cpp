//
// Created by daniel on 2/26/18.
//

#include "LDE.h"
#include "NodoL.h"
#include <iostream>
#include <cstring>

LDE::LDE(){
    this->first = new NodoL(-1);
    this->last = new NodoL(-1);
}

void LDE::SortLista() {
    for(int i = 0; i < cantelem; i++){
        for(int i = 0; i < cantelem -1; i++){
            if(first->sig->valueN > first->valueN){
                first->sig->valueN = first->valueN;
                first->valueN = first->sig->valueN;
            }
            else if(last->ant->valueN < last->valueN){
                last->ant->valueN = last->valueN;
                last->valueN = last->ant->valueN;
            }
        }
    }
}

void LDE::add(NodoL *n) {
    NodoL *aux = first;

    if(first->valueN == -1) {
        first = n;
        first = last;
        cantelem++;
    }
    else{
        for(int i = 0; i < cantelem - 1; i++){
            aux = aux->sig;
            aux->sig->ant = n;
            cantelem ++;
        }
    }
    if(first->sig->valueN == -1){
        first->sig = n;
        first->sig->ant = first->ant;
        cantelem++;
    }
    else if(last->ant->valueN == -1){
        last->ant = n;
        last->ant->sig = last->sig;
        cantelem++;
    }
}

void LDE::borrar(int n) {

}

int LDE::getNodoL(int pos) {
    for(int i = 0; i < pos - 1; i++){
        return pos;
    }
}

int LDE::MaxRep() {
    return 0;
}

int LDE::MaxDif() {
    return 0;
}
