#pragma once

#include <c++/4.8.3/string>
using namespace std;

class Plateau {
private:
    string plateau[8][8];

public:
    Plateau();

    void afficherPlateau();
    virtual void placerPieces(int positionX, int positionY, string nom);
};
