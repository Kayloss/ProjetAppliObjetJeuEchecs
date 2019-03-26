#include "Cavalier.h"

Cavalier::Cavalier(int id, int positionX, int positionY, bool blanc):Piece(id, positionX, positionY, blanc){
    this->_id = id;
    this->_position.first = positionX;
    this->_position.second = positionY;
    this->_blanc = blanc;
    this->_enJeu = true;

    if (!blanc){
        this->_nom = "cav_n";
    } else {
        this->_nom = "cav_b";
    }
}

void Cavalier::mouv(int cas) {

    int positionX = this->_position.first;
    int positionY = this->_position.second;

    pair <int, int> nouvellePosition;

    switch (cas) {

        case 1 :
            nouvellePosition.first = positionX - 2;
            nouvellePosition.second = positionY + 1;
            break;

        case 2 :
            nouvellePosition.first = positionX - 1;
            nouvellePosition.second = positionY + 2;
            break;

        case 3 :
            nouvellePosition.first = positionX + 1;
            nouvellePosition.second = positionY + 2;
            break;

        case 4 :
            nouvellePosition.first = positionX + 2;
            nouvellePosition.second = positionY + 1;
            break;

        case 5 :
            nouvellePosition.first = positionX + 2;
            nouvellePosition.second = positionY - 1;
            break;

        case 6 :
            nouvellePosition.first = positionX + 1;
            nouvellePosition.second = positionY - 2;
            break;

        case 7 :
            nouvellePosition.first = positionX - 1;
            nouvellePosition.second = positionY - 2;
            break;

        case 8 :
            nouvellePosition.first = positionX - 2;
            nouvellePosition.second = positionY - 1;
            break;

    }
    this->setPosition(nouvellePosition);
}