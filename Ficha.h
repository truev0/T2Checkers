//
// Created by 56961 on 09-06-2021.
//

#ifndef TALLER2_FICHA_H
#define TALLER2_FICHA_H


#pragma once
class Ficha
{
private:
    Ficha* arriba;
    Ficha* izquierda;
    int fila;
    int columna;
    char valor;
public:
    /*
        Constructor sin parametros, para crear un ficha simple
    */
    Ficha();

    /*
        Constructor
        @param s : carcater que se desea usar para poner un "bloque"
    */
    Ficha(char valor, int fila, int columna);

    /*
        Get valor
        @return caracter asociado al nodo, en caso de usar uno distinto de caracter por defecto
    */
    char getValor();

    /*
        Set valor
        setea el valor de la ficha
    */

    void setValor(char valor);

    /*
        Set up
        establece la conexion con un nodo superior

    */
    void setArriba(Ficha* arriba);
    /*
        Get up
        @return nodo ubicado en una posicion superior, en la misma columna
    */
    Ficha* getArriba();
    /*
        Set right
        establece la conexion con un nodo una posicion a la derecha
    */
    void setIzquierda(Ficha* izquierda);
    /*
        Get right
        @return nodo ubicado en una posicion a la derecha, en la misma fila
    */
    Ficha* getIzquierda();
    /*
        Set fila
        establece cual es la coordenada fila del nodo
    */
    void setFila(int fila);
    /*
        Get fila
        @return numero de la fila en la que se encuentra el nodo
    */
    int getFila();
    /*
        Set columna
        establece cual es la coordenada columna del nodo
    */
    void setColumna(int columna);
    /*
        Get columna
        @return numero de la columna en la que se encuentra el nodo
    */
    int getColumna();

    // Destructor
    ~Ficha();
};



#endif //TALLER2_FICHA_H
