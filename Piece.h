#pragma once


#include <iostream>
#include <c++/4.8.3/vector>

using namespace std;

class Piece {
protected:
    int _id;
    pair <int, int> _position;
    bool _blanc;
    bool _enJeu;
    string _name;

public:
    vector<Piece> lesPieces;
    Piece();
    Piece(int id, bool blanc, bool enJeu, int positionX, int positionY);
    ~Piece();

    int getId();
    void setId(int newValue);

    virtual int getPositionX();
    virtual int getPositionY();
    virtual void setPosition(pair <int, int> newPosition);

    void lirePiece();

    bool getWhite();
    void setWhite(bool newValue);

    bool getTaken();
    void setTaken(bool newValue);

    string getName();
    void setName(string newValue);

    void addPiece();

    void showPiece();

    void move();
};