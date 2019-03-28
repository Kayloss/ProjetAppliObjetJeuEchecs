#include "Reine.h"

Reine::Reine(int id, int positionX, int positionY, bool blanc):Piece(id, positionX, positionY, blanc){
    this->_id = id;
    this->_position.first = positionX;
    this->_position.second = positionY;
    this->_blanc = blanc;
    this->_enJeu = true;

    if (!blanc){
        this->_nom = "rei_n";
    } else {
        this->_nom = "rei_b";
    }
}

void Reine::mouv(int cas, int nbCase){

    int positionX = this->_position.first;
    int positionY = this->_position.second;

    pair <int, int> nouvellePosition;

    switch (1) {

        case 1 :
            nouvellePosition.first = positionX - nbCase;
            nouvellePosition.second = positionY + nbCase;
            break;

        case 2 :
            nouvellePosition.first = positionX;
            nouvellePosition.second = positionY + nbCase;
            break;

        case 3 :
            nouvellePosition.first = positionX + nbCase;
            nouvellePosition.second = positionY + nbCase;
            break;

        case 4 :
            nouvellePosition.first = positionX + nbCase;
            nouvellePosition.second = positionY;
            break;

        case 5 :
            nouvellePosition.first = positionX + nbCase;
            nouvellePosition.second = positionY - nbCase;
            break;

        case 6 :
            nouvellePosition.first = positionX;
            nouvellePosition.second = positionY - nbCase;
            break;

        case 7 :
            nouvellePosition.first = positionX - nbCase;
            nouvellePosition.second = positionY - nbCase;
            break;

        case 8 :
            nouvellePosition.first = positionX - 1;
            nouvellePosition.second = positionY;
            break;
    }
    this->setPosition(nouvellePosition);
}