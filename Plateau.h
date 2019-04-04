#pragma once

#include <string>
using namespace std;

class Plateau {
private:
    string plateau[8][8];

public:
    Plateau();
	void verifPlateau();
	void initPlateau();
    void afficherPlateau();
    virtual void placerPieces(int positionX, int positionY, string nom);
	void jouerPiece();
};
