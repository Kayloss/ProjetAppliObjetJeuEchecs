#include "Pion.h"

Pion::Pion(int id, int positionX, int positionY, bool blanc):Piece(id, positionX, positionY, blanc){
    this->_id = id;
    this->_position.first = positionX;
    this->_position.second = positionY;
    this->_blanc = blanc;
    this->_enJeu = true;

    if (!blanc){
        this->_nom = "pio_n";
    } else {
        this->_nom = "pio_b";
    }
}

void Pion::mouv(int cas){
    int positionX = this->_position.first;
    int positionY = this->_position.second;

    pair <int, int> nouvellePosition;

    switch (cas) {

        case 1 :
            nouvellePosition.first = positionX + 1;
            nouvellePosition.second = positionY;

        case 2 :
            nouvellePosition.first = positionX + 2;
            nouvellePosition.second = positionY;

        case 3 :
            nouvellePosition.first = positionX + 1;
            nouvellePosition.second = positionY + 1;

        case 4 :
            nouvellePosition.first = positionX + 1;
            nouvellePosition.second = positionY - 1;
    }
    this->setPosition(nouvellePosition);
}