//
// Created by oldboy on 25/11/18.
//
#include <SFML/Network/Packet.hpp>
#include <cstring>
#include "Singleton.h"
#include "Listas/LinkedList.h"

Singleton* Singleton::instance = nullptr;
sf::TcpSocket* Singleton::server = nullptr;

Singleton *Singleton::getInstance() {

    if(instance == nullptr){
        instance = new Singleton();
        server = new sf::TcpSocket();
    }

    return instance;
}


void Singleton::connectToServer(std::string ip, int port) {
    if(instance == nullptr){
        getInstance();
    }


    if(server->connect(sf::IpAddress(ip), port) == sf::Socket::Done){
        sf::Packet packet;
        packet << "client";
        server->send(packet);
    } else{
        std::cout << "Couldn't connect to the server" << std::endl;
    }
}

sf::TcpSocket *Singleton::getServer() {
    if(instance == nullptr){
        getInstance();
    }

    return server;
}


LinkedList<std::string> Singleton::splitString(std::string string, char *splitCharacter) {
    LinkedList<std::string> list = LinkedList<std::string>();
    char* messageChar = strdup(string.c_str());
    char* element = strtok(messageChar, splitCharacter);
    while (element != NULL) {
        std::string str(element);
        list.insertAtEnd(str);
        element = strtok (NULL, splitCharacter);
    }
    return list;
}