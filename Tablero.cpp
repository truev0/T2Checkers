//
// Created by 56961 on 09-06-2021.
//

#include "Tablero.h"
#include <iostream>
#include <sstream>

using namespace std;

Tablero::Tablero()
{
}

Tablero::Tablero(int ancho, int largo)
{
    this->ancho = ancho;
    this->largo = largo;
    this->ACOL = new Ficha[ancho + 1];
    this->AROW = new Ficha[largo + 1];
}

void Tablero::agregarFicha(char valor, int fila, int columna)
{
    Ficha* ficha = new Ficha(valor, fila, columna);

    //Izquierda
    Ficha* fichaAux = &AROW[fila];

    while (fichaAux->getIzquierda()->getColumna() > 0 && fichaAux->getIzquierda()->getColumna() > columna) {
        fichaAux = fichaAux->getIzquierda();
    }

    ficha->setIzquierda(fichaAux->getIzquierda());
    fichaAux->setIzquierda(ficha);


    // Arriba
    Ficha* fichaAux2 = &ACOL[columna];
    while (fichaAux2->getArriba()->getFila() > 0 && fichaAux2->getArriba()->getFila() > 0)
    {
        fichaAux2 = fichaAux2->getArriba();
    }

    ficha->setArriba(fichaAux2->getArriba());
    fichaAux2->setArriba(ficha);

    return;
}

void Tablero::rellenarTablero(int ancho, int largo)
{
    if (ancho == 8 && largo == 8) // Tablero 8x8
    {
        for (int y = 1; y < (largo + 1); y++)
        {
            for (int x = 1; x < (ancho + 1); x++)
            {
                if (y <= 3 && ((y + x) % 2 != 0))
                {
                    agregarFicha('O', y, x); //Coloco fichas---> O
                }
                else if (y >= 6 && ((y + x) % 2 != 0))
                {
                    agregarFicha('X', y, x); // Coloco fichas ---> X
                }

            }
        }
    }
    else {
        for (int y = 1; y < (largo + 1); y++) // Tablero 10x10
        {
            for (int x = 1; x < (ancho + 1); x++)
            {
                if (y <= 4 && ((y + x) % 2 != 0))
                {
                    agregarFicha('O', y, x); //Coloco fichas---> O
                }
                else if (y >= 7 && ((y + x) % 2 != 0))
                {
                    agregarFicha('X', y, x); // Coloco fichas  ---> X
                }

            }
        }
    }

}

bool Tablero::seleccionarFicha(int fila, int columna)
{
    Ficha* fichaAux = AROW[fila].getIzquierda();
    return false;
}

bool Tablero::moverFicha(int fila, int columna)
{
    return false;
}

void Tablero::convertirFicha()
{
}

bool Tablero::comerFicha()
{
    return false;
}

bool Tablero::validacionMovimiento()
{
    return false;
}

void Tablero::revisarFichasRojas()
{
    int cRojas = 0;
    for (int i = 1; i < largo + 1; i++)
    {
        Ficha* fichaAux = this->AROW;
        Ficha* fichaAux2 = &fichaAux[i];
        fichaAux2 = fichaAux2->getIzquierda();
        while (fichaAux2 != &fichaAux[i])
        {
            char c = fichaAux2->getValor();
            if (c == char(79))
            {
                cRojas++;
            }
            fichaAux2 = fichaAux2->getIzquierda();
        }
    }
    cout << "El numero de fichas rojas restantes es : " << cRojas << "." << endl;
}

void Tablero::revisarFichasNegras()
{
    int cNegras = 0;
    for (int i = 1; i < largo + 1; i++)
    {
        Ficha* fichaAux = this->AROW;
        Ficha* fichaAux2 = &fichaAux[i];
        fichaAux2 = fichaAux2->getIzquierda();
        while (fichaAux2 != &fichaAux[i])
        {
            char c = fichaAux2->getValor();
            if (c == char(88))
            {
                cNegras++;
            }
            fichaAux2 = fichaAux2->getIzquierda();
        }
    }
    cout << "El numero de fichas negras restantes es : " << cNegras << "." << endl;
}

void Tablero::mostrarTablero()
{
    cout << "Matriz" << endl;
    for (int i = 1; i <= largo; i++)
    {
        string fila;
        Ficha* fichaAux = AROW[i].getIzquierda();
        int espaciosVacios = ancho - fichaAux->getColumna();
        while (true)
        {
            for (int j = 0; j < (espaciosVacios); j++)
            {
                fila = ". " + fila;
            }
            if (fichaAux->getColumna() == 0) break;
            stringstream s;
            s << to_string(fichaAux->getValor()) << " ";
            fila = s.str() + fila;
            espaciosVacios = fichaAux->getColumna() - fichaAux->getIzquierda()->getColumna() - 1;
            fichaAux = fichaAux->getIzquierda();
        }
        cout << fila << endl;
    }
}

Tablero::~Tablero()
{
}
