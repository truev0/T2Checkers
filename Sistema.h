//
// Created by 56961 on 09-06-2021.
//

#pragma once
#include "Tablero.h"
class Sistema
{
private:
    Tablero* tablero;
    int tamanhoD = 8;
    int maximoJugadas = 10;

public:
    void iniciarJuego();
    void menuPrincipal();
    void menuConfiguracion();
    void menuPartida();
    void menuSeleccion();
    void menuMoverse();
    void menuComer();


    ~Sistema();

};
