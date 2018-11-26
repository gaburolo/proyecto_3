//
// Created by oldboy on 25/11/18.
//

#ifndef TECFS_TEST_VIDEOHANDLER_H
#define TECFS_TEST_VIDEOHANDLER_H

#include <iostream>
#include <SFML/Network/Packet.hpp>
#include <SFML/Network/Socket.hpp>
#include <fstream>
#include <dirent.h>
#include "Singleton.h"

typedef unsigned char byte;

class VideoHandler {
public:
    static int sendVideo(std::string pathFile);

    static int sendDirectory(std::string pathDirectory);

    static std::string getVideo(std::string fileName);
};


#endif //TECFS_TEST_VIDEOHANDLER_H
