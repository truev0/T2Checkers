//
// Created by 56961 on 09-06-2021.
//

#include "Ficha.h"

Ficha::Ficha()
{
    this->valor = 0;
    this->fila = 0;
    this->columna = 0;
    this->izquierda = this;
    this->arriba = this;
}

Ficha::Ficha(char valor, int fila, int columna)
{
    this->valor = valor;
    this->fila = fila;
    this->columna = columna;
    this->izquierda = nullptr;
    this->arriba = nullptr;
}

char Ficha::getValor()
{
    return this->valor;
}

void Ficha::setValor(char valor)
{
    this->valor = valor;
}

void Ficha::setArriba(Ficha* arriba)
{
    this->arriba = arriba;
}

Ficha* Ficha::getArriba()
{
    return this->arriba;
}

void Ficha::setIzquierda(Ficha* izquierda)
{
    this->izquierda = izquierda;
}

Ficha* Ficha::getIzquierda()
{
    return this->izquierda;
}

void Ficha::setFila(int fila)
{
    this->fila = fila;
}

int Ficha::getFila()
{
    return this->fila;
}

void Ficha::setColumna(int columna)
{
    this->columna = columna;
}

int Ficha::getColumna()
{
    return this->columna;
}

Ficha::~Ficha()
{
}
