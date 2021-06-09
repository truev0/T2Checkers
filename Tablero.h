//
// Created by 56961 on 09-06-2021.
//

#ifndef TALLER2_TABLERO_H
#define TALLER2_TABLERO_H
#pragma once
#include "Ficha.h"

class Tablero
{
private:
    int ancho; // Numero de columnas
    int largo; // Numero de filas
    Ficha* ACOL; // Cabecera columnas
    Ficha* AROW; // Cabecera filas

public:
    Tablero();
    Tablero(int ancho, int largo);


    void agregarFicha(char valor, int fila, int columna);
    void rellenarTablero(int ancho, int largo);
    bool seleccionarFicha(int fila, int columna);
    bool moverFicha(int fila, int columna);
    void convertirFicha();
    bool comerFicha();
    bool validacionMovimiento();
    void revisarFichasRojas();
    void revisarFichasNegras();
    void mostrarTablero();

    ~Tablero();

};
#endif //TALLER2_TABLERO_H
