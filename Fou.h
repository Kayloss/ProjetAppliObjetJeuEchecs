#pragma once

#include "Piece.h"

class Fou : public Piece {
public:
    Fou(int id, int positionX, int positionY, bool blanc);
    void mouv(int cas, int nbCase);
};