//
// Created by oldboy on 25/11/18.
//
#ifndef TECFS_TEST_MENU_H
#define TECFS_TEST_MENU_H

#include <SFML/Graphics.hpp>
#include <SFML/Network/Packet.hpp>
#include <dirent.h>
#include <cstring>
#include "Listas/LinkedList.h"
#include "Singleton.h"
#include "ControlVideo.h"

#define NumberOfItems 11

class Menu
{
public:
    Menu(float width, float height);
    ~Menu();

    static void run();

    void draw(sf::RenderWindow &window);
    void MoveUp();
    void MoveDown();
    void itemsMenu();
    void itemsMenuSave();
    void itemsSearch();
    void itemsSave();
    void itemsSaveDirectory();
    int typeOfWindow;
    int GetPressdItem() {return  selectedItemIndex;}
    void setDisplay(std::string string);
    void search();
    void playVideo(int i);
    std::string display = "";
    void saveVideo();
    void saveDirectory();

private:
    float width;
    float height;
    int selectedItemIndex;
    sf::Font font;
    sf::Text menu[NumberOfItems];
    LinkedList<std::string> names;
    void clearItems();
    void getTable();
    LinkedList<std::string> coincidence();
};

#endif
//TECFS_TEST_MENU_H
