cmake_minimum_required(VERSION 3.13)
project(ProjetAppliObjetJeuEchecs)

set(CMAKE_CXX_STANDARD 14)

add_executable(ProjetAppliObjetJeuEchecs main.cpp Piece.cpp Piece.h Cavalier.cpp Cavalier.h Fou.cpp Fou.h Roi.cpp Roi.h Tour.cpp Tour.h Pion.cpp Pion.h Reine.cpp Reine.h Plateau.cpp Plateau.h)