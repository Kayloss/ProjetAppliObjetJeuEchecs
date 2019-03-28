#pragma once

#include <c++/4.8.3/string>
using namespace std;

class Plateau {
public:
    Plateau();
    string plateau[7][7];

    void afficherPlateau();
    virtual void initPlateau();
};
