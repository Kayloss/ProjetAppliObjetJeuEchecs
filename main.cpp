#include <iostream>
#include "Piece.h"

int main() {
    Piece *unePiece;
    unePiece = new Piece(1, 1, 5, false);

    unePiece->lirePiece();
}