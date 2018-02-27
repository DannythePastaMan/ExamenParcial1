#include "LDE.h"
#include "NodoL.h"
#include <iostream>
#include <cstring>

LDE::LDE(){
    this->first = new NodoL(-1);
    this->last = new NodoL(-1);
}

void LDE::SortLista() {
    NodoL *aux = new NodoL(-1);
    for(int i = 0; i < cantelem - 1; i++){
        for(int i = 0; i < cantelem -1; i++){
            if(first->sig->valueN > first->valueN){
                aux->valueN = first->valueN;
                first->valueN = first->sig->valueN;
                first->valueN = aux->valueN;
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
        SortLista();
    }
    else{
        for(int i = 0; i < cantelem - 1; i++){
            aux = aux->sig;
            aux->sig->ant = n;
            cantelem ++;
            SortLista();
        }
    }
    if(first->sig->valueN == -1){
        first->sig = n;
        first->sig->ant = first->ant;
        cantelem++;
        SortLista();
    }
    else if(last->ant->valueN == -1){
        last->ant = n;
        last->ant->sig = last->sig;
        cantelem++;
        SortLista();
    }
}

void LDE::borrar(int n) {
    NodoL *aux = new NodoL(-1);

    for(int i = 0 ; i < cantelem; i++){
        if(first->valueN == n){
            first = first->sig;
            first->sig == nullptr;
            cantelem --;
            SortLista();
        }

        else if(last->valueN == n){
            last = last->ant;
            last->ant = nullptr;
            cantelem--;
            SortLista();
        }
    }

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
    return first->valueN - last->valueN;
}
