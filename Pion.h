#pragma once

#include "Piece.h"

class Pion : public Piece {
public:
    Pion(int id, int positionX, int positionY, bool blanc);
    void mouv(int cas);
};