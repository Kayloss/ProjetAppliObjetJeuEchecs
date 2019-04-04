#include "pch.h"
#include <iostream>
#include "Plateau.h"
#include "Pion.h"
#include "Fou.h"
#include "Cavalier.h"
#include "Tour.h"
#include "Roi.h"
#include "Reine.h"

Plateau::Plateau() {

}

void Plateau::verifPlateau()
{
	for (int i1 = 0; i1 < 8; i1++)
	{
		for (int i2 = 0; i2 < 8; i2++)
		{
			if (this->plateau[i1][i2] == "")
			{
				plateau[i1][i2] = "   ";
			}
		}
	}
}

void Plateau::initPlateau()
{
	
}

void Plateau::afficherPlateau(){

	cout << "" << endl
		<< "              _______________________________" << endl
		<< "             |   |   |   |   |   |   |   |   |" << endl
		<< "           8 |" << this->plateau[7][0] << "|" << this->plateau[7][1] << "|" << this->plateau[7][2] << "|" << this->plateau[7][3] << "|" << this->plateau[7][4] << "|" << this->plateau[7][5] << "|" << this->plateau[7][6] << "|" << this->plateau[7][7] << "|" << endl
		<< "             |___|___|___|___|___|___|___|___|" << endl
		<< "             |   |   |   |   |   |   |   |   |" << endl
		<< "           7 |" << this->plateau[6][0] << "|" << this->plateau[6][1] << "|" << this->plateau[6][2] << "|" << this->plateau[6][3] << "|" << this->plateau[6][4] << "|" << this->plateau[6][5] << "|" << this->plateau[6][6] << "|" << this->plateau[6][7] << "|" << endl
		<< "             |___|___|___|___|___|___|___|___|" << endl
		<< "             |   |   |   |   |   |   |   |   |" << endl
		<< "           6 |" << this->plateau[5][0] << "|" << this->plateau[5][1] << "|" << this->plateau[5][2] << "|" << this->plateau[5][3] << "|" << this->plateau[5][4] << "|" << this->plateau[5][5] << "|" << this->plateau[5][6] << "|" << this->plateau[5][7] << "|" << endl
		<< "             |___|___|___|___|___|___|___|___|" << endl
		<< "             |   |   |   |   |   |   |   |   |" << endl
		<< "           5 |" << this->plateau[4][0] << "|" << this->plateau[4][1] << "|" << this->plateau[4][2] << "|" << this->plateau[4][3] << "|" << this->plateau[4][4] << "|" << this->plateau[4][5] << "|" << this->plateau[4][6] << "|" << this->plateau[4][7] << "|" << endl
		<< "             |___|___|___|___|___|___|___|___|" << endl
		<< "             |   |   |   |   |   |   |   |   |" << endl
		<< "           4 |" << this->plateau[3][0] << "|" << this->plateau[3][1] << "|" << this->plateau[3][2] << "|" << this->plateau[3][3] << "|" << this->plateau[3][4] << "|" << this->plateau[3][5] << "|" << this->plateau[3][6] << "|" << this->plateau[3][7] << "|" << endl
		<< "             |___|___|___|___|___|___|___|___|" << endl
		<< "             |   |   |   |   |   |   |   |   |" << endl
		<< "           3 |" << this->plateau[2][0] << "|" << this->plateau[2][1] << "|" << this->plateau[2][2] << "|" << this->plateau[2][3] << "|" << this->plateau[2][4] << "|" << this->plateau[2][5] << "|" << this->plateau[2][6] << "|" << this->plateau[2][7] << "|" << endl
		<< "             |___|___|___|___|___|___|___|___|" << endl
		<< "             |   |   |   |   |   |   |   |   |" << endl
		<< "           2 |" << this->plateau[1][0] << "|" << this->plateau[1][1] << "|" << this->plateau[1][2] << "|" << this->plateau[1][3] << "|" << this->plateau[1][4] << "|" << this->plateau[1][5] << "|" << this->plateau[1][6] << "|" << this->plateau[1][7] << "|" << endl
		<< "             |___|___|___|___|___|___|___|___|" << endl
		<< "             |   |   |   |   |   |   |   |   |" << endl
		<< "           1 |" << this->plateau[0][0] << "|" << this->plateau[0][1] << "|" << this->plateau[0][2] << "|" << this->plateau[0][3] << "|" << this->plateau[0][4] << "|" << this->plateau[0][5] << "|" << this->plateau[0][6] << "|" << this->plateau[0][7] << "|" << endl
		<< "             |___|___|___|___|___|___|___|___|" << endl
		<< "               A | B | C | D | E | F | G | H " << endl;
}

void Plateau::placerPieces(int positionX, int positionY, string nom){
    if (nom == "pn1") {
        this->plateau[positionX][positionY] = "pn1";
	}
	else if (nom == "pn2") {
		this->plateau[positionX][positionY] = "pn2";
	}
	else if (nom == "pn3") {
		this->plateau[positionX][positionY] = "pn3";
    }
	else if (nom == "pn4") {
		this->plateau[positionX][positionY] = "pn4";
	}
	else if (nom == "pn5") {
		this->plateau[positionX][positionY] = "pn5";
	}
	else if (nom == "pn6") {
		this->plateau[positionX][positionY] = "pn6";
	}
	else if (nom == "pn7") {
		this->plateau[positionX][positionY] = "pn7";
	}
	else if (nom == "pn8") {
		this->plateau[positionX][positionY] = "pn8";
	}
	else if (nom == "pb1") {
		this->plateau[positionX][positionY] = "pb1";
	}
	else if (nom == "pb2") {
		this->plateau[positionX][positionY] = "pb2";
	}
	else if (nom == "pb3") {
		this->plateau[positionX][positionY] = "pb3";
	}
	else if (nom == "pb4") {
		this->plateau[positionX][positionY] = "pb4";
	}
	else if (nom == "pb5") {
		this->plateau[positionX][positionY] = "pb5";
	}
	else if (nom == "pb6") {
		this->plateau[positionX][positionY] = "pb6";
	}
	else if (nom == "pb7") {
		this->plateau[positionX][positionY] = "pb7";
	}
	else if (nom == "pb8") {
		this->plateau[positionX][positionY] = "pb8";
	}
	else if (nom == "R_n") {
        this->plateau[positionX][positionY] = "R_n";
    }else if (nom == "R_b") {
        this->plateau[positionX][positionY] = "R_b";
    }else if (nom == "r_n") {
        this->plateau[positionX][positionY] = "r_n";
    }else if (nom == "r_b") {
        this->plateau[positionX][positionY] = "r_b";
    }else if (nom == "tn1") {
        this->plateau[positionX][positionY] = "tn1";
    }
	else if (nom == "tn2") {
		this->plateau[positionX][positionY] = "tn2";
	}
	else if (nom == "tb1") {
        this->plateau[positionX][positionY] = "tb1";
    }
	else if (nom == "tb2") {
		this->plateau[positionX][positionY] = "tb2";
	}
	else if (nom == "cn1") {
        this->plateau[positionX][positionY] = "cn1";
    }
	else if (nom == "cn2") {
		this->plateau[positionX][positionY] = "cn2";
	}
	else if (nom == "cb1") {
        this->plateau[positionX][positionY] = "cb1";
    }
	else if (nom == "cb2") {
		this->plateau[positionX][positionY] = "cb2";
	}
	else if (nom == "fn1") {
        this->plateau[positionX][positionY] = "fn1";
    }
	else if (nom == "fn2") {
		this->plateau[positionX][positionY] = "fn2";
	}
	else if (nom == "fb1") {
        this->plateau[positionX][positionY] = "fb1";
    }
	else if (nom == "fb2") {
		this->plateau[positionX][positionY] = "fb2";
	}
}

void Plateau::jouerPiece()
{
	int choixX;
	cout << "Saisir la coordonnée X de la pièce " <<endl;
	cin >> choixX;
	int choixY;
	cout << "Saisir la coordonnée Y de la pièce " << endl;
	cin >> choixY;
	
	if (plateau[choixX][choixY] == "tb1") {
		int choixDeplX;
		cout << "Saisir la coordonnée X " << endl;
		cin >> choixDeplX;

		int choixDeplY;
		cout << "Saisir la coordonnée Y " << endl;
		cin >> choixDeplY;
		//tb1.deplacement(choixDeplX,choixDeplY);
	}
	
}
