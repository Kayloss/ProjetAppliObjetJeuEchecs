#include "Fou.h"

Fou::Fou(int id, int positionX, int positionY, bool blanc):Piece(id, positionX, positionY, blanc){
    this->_id = id;
    this->_position.first = positionX;
    this->_position.second = positionY;
    this->_blanc = blanc;
    this->_enJeu = true;

    if (!blanc){
        this->_nom = "fou_n";
    } else {
        this->_nom = "fou_b";
    }
}

void Fou::mouv(int cas, int nbCase){

    int positionX = this->_position.first;
    int positionY = this->_position.second;

    pair <int, int> nouvellePosition;

    switch (cas) {

        case 1 :
            nouvellePosition.first = positionX - nbCase;
            nouvellePosition.second = positionY + nbCase;
            break;

        case 2 :
            nouvellePosition.first = positionX + nbCase;
            nouvellePosition.second = positionY + nbCase;
            break;

        case 3 :
            nouvellePosition.first = positionX + nbCase;
            nouvellePosition.second = positionY - nbCase;
            break;

        case 4 :
            nouvellePosition.first = positionX - nbCase;
            nouvellePosition.second = positionY - nbCase;
            break;
    }
    this->setPosition(nouvellePosition);
}