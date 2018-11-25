//
// Created by oldboy on 25/11/18.
//
#include <iostream>
#include <SFML/Graphics.hpp>
#include "ControlVideo.h"
#include "Inicio.h"



int main() {
    std::string ip;
    std::cout << "Ingrese la IP del servidor: ";
    std::cin >> ip;

    Singleton::connectToServer(ip, 2001);

    Menu::run();

    return 0;
}
