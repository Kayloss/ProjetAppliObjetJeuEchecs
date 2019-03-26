#pragma once

#include <c++/4.8.3/utility>
#include <c++/4.8.3/string>
#include <c++/4.8.3/vector>
#include <c++/4.8.3/iostream>

using namespace std;

class Piece {

protected:
    int _id;
    string _nom;
    pair <int, int> _position;
    bool _blanc;
    bool _enJeu;

public:
    vector<Piece> lesPieces;

    Piece(int id, int positionX, int positionY, bool blanc);

    pair <int, int> getPosition();
    void setPosition(pair <int, int> nouvellePosition);

    void lirePiece();
    void mouv();
};

