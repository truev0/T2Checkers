//
// Created by 56961 on 09-06-2021.
//
#include "Sistema.h"
#include <iostream>

using namespace std;


void Sistema::iniciarJuego()
{
    tablero = new Tablero(tamanhoD, tamanhoD);
    tablero->rellenarTablero(tamanhoD, tamanhoD);
    menuPartida();
}

void Sistema::menuPrincipal()
{
    int opcion;
    do
    {
        cout << "\n***************** MENU *****************" << endl;
        cout << "1. Nuevo Juego" << endl;
        cout << "2. Configuracion" << endl;
        cout << "3. Salir" << endl;
        cin >> opcion;
        switch (opcion)
        {
            case 1:
                iniciarJuego();
                break;
            case 2:
                menuConfiguracion();
                break;
            case 3:
                break;
            case 4:
                cout << this->tamanhoD << endl;
                break;
            case 5:
                cout << this->maximoJugadas << endl;
                break;
            default:
            {
                cout << "Ingrese una opcion entre 1 y 3: " << endl;
                continue;
            }

        }
    } while (opcion != 3);
}

void Sistema::menuConfiguracion()
{
    int opcion;
    bool salir = true;
    do
    {
        int opcion2;
        cout << "\n***************** MENU CONFIGURACION *****************" << endl;
        cout << "1. Tamanho tablero" << endl;
        cout << "2. Cantidad maxima jugadas" << endl;
        cout << "Seleccione una opcion: "; cin >> opcion;
        switch (opcion)
        {
            case 1:
                cout << "\n***************** SELECCIONE TAMANO *****************" << endl;
                cout << "1. 8x8" << endl;
                cout << "2. 10x10" << endl;
                cout << "Seleccione una opcion: "; cin >> opcion2;
                if (opcion2 == 1)
                {
                    this->tamanhoD = 8;
                }
                else if (opcion2 == 2)
                {
                    this->tamanhoD = 10;
                }
                salir = false;
                break;
            case 2:
                cout << "\n***************** SELECCIONE MAXIMO JUGADAS *****************" << endl;
                cout << "Ingrese un numero: "; cin >> opcion2;
                this->maximoJugadas = opcion2;
                salir = false;
                break;
            default:
            {
                cout << "Ingrese una opcion entre 1 y 2: " << endl;
                continue;
            }

        }
    } while (salir);
}

void Sistema::menuPartida()
{
    int opcion;
    bool salir = true;
    do
    {
        this->tablero->mostrarTablero();
        cout << "\n***************** MENU PARTIDA *****************" << endl;
        cout << "1. Moverse" << endl;
        cout << "2. Comer" << endl;
        cout << "3. Revisar cantidad fichas rojas" << endl;
        cout << "4. Revisar cantidad fichas negras" << endl;
        cout << "5. Revisar cantidad de movimientos restantes" << endl;
        cout << "6. Regresar al menu principal" << endl;
        cout << "Seleccione una opcion: "; cin >> opcion;
        switch (opcion)
        {
            case 1:
                menuSeleccion();
            case 2:
                break;
            case 3:
                tablero->revisarFichasRojas();
                break;
            case 4:
                tablero->revisarFichasNegras();
                break;
            case 5:
                break;
            case 6:
                cout << "... Saliendo ..." << endl;
                salir = false;
            default:
            {
                cout << "Ingrese una opcion entre 1 y 6: " << endl;
                continue;
            }
        }
    } while (salir);
}

void Sistema::menuSeleccion()
{
    int filaFicha;
    int columnaFicha;
    bool salir = true;
    cout << "Ingrese la fila de la ficha a seleccionar: " << endl; cin >> filaFicha;
    cout << "Ingrese la columna de la ficha a seleccionar: " << endl; cin >> columnaFicha;
    do {
        cout << "\n***************** MOVIMIENTO *****************" << endl;
        if ()
        cout << "1. Moverse" << endl;
        cout << "2. Comer" << endl;
    } while (salir);
}

void Sistema::menuMoverse()
{
}

Sistema::~Sistema()
{
}
