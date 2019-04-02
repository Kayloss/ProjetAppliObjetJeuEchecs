#include "Piece.h"

Piece::Piece(){

}
Piece::Piece(int id, bool blanc, bool enJeu, int positionX, int positionY){
    this->_id = id;
    this->_blanc = blanc;
    this->_position.first = positionX;
    this->_position.second = positionY;
    this->_enJeu = enJeu;
}
Piece::~Piece(){

}

int Piece::getId(){
    return this->_id;
}
void Piece::setId(int nouvelleValeur){
    this->_id = nouvelleValeur;
}

 int Piece::getPositionX(){
    return this->_position.first;
}

int Piece::getPositionY(){
    return this->_position.second;
}

void Piece::setPosition(pair <int, int> nouvellePosition){
    this->_position = nouvellePosition;
}

bool Piece::getWhite(){
    return this->_blanc;
}
void Piece::setWhite(bool nouvelleValeur){
    this->_blanc = nouvelleValeur;
}

bool Piece::getTaken(){
    return this->_enJeu;
}
void Piece::setTaken(bool nouvelleValeur){
    this->_enJeu = nouvelleValeur;
}

string Piece::getName(){
    return this->_name;
}
void Piece::setName(string nouvelleValeur){
    this->_name = nouvelleValeur;
}

void Piece::addPiece(){

}

void Piece::showPiece() {

}

void move(){
}

void Piece::lirePiece(){
    cout << "La piece est une " << this->_name << " placee sur la case " << this->_position.first << ", " << this->_position.second << endl;
}