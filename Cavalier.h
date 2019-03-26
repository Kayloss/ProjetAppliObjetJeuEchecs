#pragma once

#include "Piece.h"

class Cavalier : public Piece {
public:
    Cavalier(int id, int positionX, int positionY, bool blanc);
    void mouv(int cas);
};
