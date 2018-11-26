cmake_minimum_required(VERSION 3.8)
project(Aplicacion)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp ControlVideo.cpp ControlVideo.h Singleton.cpp Singleton.h Inicio.cpp Inicio.h Listas/LinkedList.h Listas/Node.h)
add_executable(Aplicacion ${SOURCE_FILES})

set(CMAKE_MODULE_PATH "${CMAKE_CURRENT_LIST_DIR}/cmake_modules")

find_package(SFML REQUIRED system window graphics network audio)
if (SFML_FOUND)
    include_directories(${SFML_INCLUDE_DIR})
    target_link_libraries(Aplicacion ${SFML_LIBRARIES})
endif()

