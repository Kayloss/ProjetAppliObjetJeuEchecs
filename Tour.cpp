#include "Tour.h"

Tour::Tour(int id, int positionX, int positionY, bool blanc):Piece(id, positionX, positionY, blanc){
    this->_id = id;
    this->_position.first = positionX;
    this->_position.second = positionY;
    this->_blanc = blanc;
    this->_enJeu = true;

    if (!blanc){
        this->_nom = "tou_n";
    } else {
        this->_nom = "tou_b";
    }
}

void Tour::mouv(int cas, int nbCase){

    int positionX = this->_position.first;
    int positionY = this->_position.second;

    pair <int, int> nouvellePosition;

    switch (cas) {

        case 1 :
            nouvellePosition.first = positionX;
            nouvellePosition.second = positionY + nbCase;

        case 2 :
            nouvellePosition.first = positionX + nbCase;
            nouvellePosition.second = positionY;

        case 3 :
            nouvellePosition.first = positionX;
            nouvellePosition.second = positionY - nbCase;

        case 4 :
            nouvellePosition.first = positionX - nbCase;
            nouvellePosition.second = positionY;
    }
    this->setPosition(nouvellePosition);
}