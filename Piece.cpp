#include "Piece.h"

Piece::Piece(int id, int positionX, int positionY, bool blanc,){
    this->_id = id;
    this->_position.first = positionX;
    this->_position.second = positionY;
    this->_blanc = blanc;
}

pair <int, int> Piece::getPosition(){
    return this->_position;
}

void Piece::setPosition(pair <int, int> nouvellePosition){
    this->_position = nouvellePosition;
}

void Piece::lirePiece(){
    cout << "Id : " << this->_id << endl
    << "Nom : " << this->_nom << endl
    << "Position (X, Y) : " << this->_position.first << ", " << this->_position.second << endl
    << "Couleur : ";

    if (this->_blanc == 0){
        cout << "Noir" << endl;
    } else {
        cout << "Blanc" << endl;
    };

    cout << "En jeu : ";

    if (this->_enJeu == 0){
        cout << "Non" << endl;
    } else {
        cout << "Oui" << endl;
    }
}

void Piece::mouv(){

}