#include <c++/4.8.3/iostream>
#include "Plateau.h"


void Plateau::afficherPlateau(){

    cout<<""<<endl
        << "               A | B | C | D | E | F | G | H " << endl
        << "              _______________________________" << endl
        <<  "             |   |   |   |   |   |   |   |   |" << endl
        <<  "           1 |" << this->plateau[0][0]<<"|"<< this->plateau[0][1]<<"|"<< this->plateau[0][2]<<"|"<<this->plateau[0][3]<<"|"<< this->plateau[0][4]<< "|"<< this->plateau[0][5]<< "|"<< this->plateau[0][6]<<"|"<< this->plateau[0][7] << "|"<< endl
        <<  "             |___|___|___|___|___|___|___|___|" << endl
        <<	"             |   |   |   |   |   |   |   |   |" << endl
        <<  "           2 |" << this->plateau[1][0] << "|" << this->plateau[1][1] << "|" << this->plateau[1][2] << "|" << this->plateau[1][3] << "|" << this->plateau[1][4] << "|" << this->plateau[1][5] << "|" << this->plateau[1][6] << "|" << this->plateau[1][7] << "|" << endl
        <<	"             |___|___|___|___|___|___|___|___|" << endl
        <<	"             |   |   |   |   |   |   |   |   |" << endl
        <<  "           3 |" << this->plateau[2][0] << "|" << this->plateau[2][1] << "|" << this->plateau[2][2] << "|" << this->plateau[2][3] << "|" << this->plateau[2][4] << "|" << this->plateau[2][5] << "|" << this->plateau[2][6] << "|" << this->plateau[2][7] << "|" << endl
        <<	"             |___|___|___|___|___|___|___|___|" << endl
        <<	"             |   |   |   |   |   |   |   |   |" << endl
        <<  "           4 |" << this->plateau[3][0] << "|" << this->plateau[3][1] << "|" << this->plateau[3][2] << "|" << this->plateau[3][3] << "|" << this->plateau[3][4] << "|" << this->plateau[3][5] << "|" << this->plateau[3][6] << "|" << this->plateau[3][7] << "|" << endl
        <<	"             |___|___|___|___|___|___|___|___|" << endl
        <<	"             |   |   |   |   |   |   |   |   |" << endl
        <<  "           5 |" << this->plateau[4][0] << "|" << this->plateau[4][1] << "|" << this->plateau[4][2] << "|" << this->plateau[4][3] << "|" << this->plateau[4][4] << "|" << this->plateau[4][5] << "|" << this->plateau[4][6] << "|" << this->plateau[4][7] << "|" << endl
        <<	"             |___|___|___|___|___|___|___|___|" << endl
        <<	"             |   |   |   |   |   |   |   |   |" << endl
        <<  "           6 |" << this->plateau[5][0] << "|" << this->plateau[5][1] << "|" << this->plateau[5][2] << "|" << this->plateau[5][3] << "|" << this->plateau[5][4] << "|" << this->plateau[5][5] << "|" << this->plateau[5][6] << "|" << this->plateau[5][7] << "|" << endl
        <<	"             |___|___|___|___|___|___|___|___|" << endl
        <<	"             |   |   |   |   |   |   |   |   |" << endl
        <<  "           7 |" << this->plateau[6][0] << "|" << this->plateau[6][1] << "|" << this->plateau[6][2] << "|" << this->plateau[6][3] << "|" << this->plateau[6][4] << "|" << this->plateau[6][5] << "|" << this->plateau[6][6] << "|" << this->plateau[6][7] << "|" << endl
        <<	"             |___|___|___|___|___|___|___|___|" << endl
        <<	"             |   |   |   |   |   |   |   |   |" << endl
        <<  "           8 |" << this->plateau[7][0] << "|" << this->plateau[7][1] << "|" << this->plateau[7][2] << "|" << this->plateau[7][3] << "|" << this->plateau[7][4] << "|" << this->plateau[7][5] << "|" << this->plateau[7][6] << "|" << this->plateau[7][7] << "|" << endl
        <<	"             |___|___|___|___|___|___|___|___|" << endl;
}

void Plateau::initPlateau(){

}