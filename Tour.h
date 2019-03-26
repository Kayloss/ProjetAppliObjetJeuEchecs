#pragma once

#include "Piece.h"

class Tour : public Piece {
public:
    Tour(int id, int positionX, int positionY, bool blanc);
    void mouv(int cas, int nbCase);
};