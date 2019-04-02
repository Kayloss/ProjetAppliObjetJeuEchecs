//test2
#include "Piece.h"
#include "Pion.h"
#include "Tour.h"
#include "Cavalier.h"
#include "Fou.h"
#include "Roi.h"
#include "Reine.h"
#include "Plateau.h"

using namespace std;

int main() {

    // création d'un vecteur <Piece> pour stocker toutes les pièces créées
    //vector <Piece> lesPieces(32);

    // création pièces noires
    // pions
    Pion pio_n1(0, 6, 0, false);
    //lesPieces.push_back(pio_n1);

    Pion pio_n2(1, 6, 1, false);
    //lesPieces.push_back(pio_n2);

    Pion pio_n3(2, 6, 2, false);
    //lesPieces.push_back(pio_n3);

    Pion pio_n4(3, 6, 3, false);
    //lesPieces.push_back(pio_n4);

    Pion pio_n5(4, 6, 4, false);
    //lesPieces.push_back(pio_n5);

    Pion pio_n6(5, 6, 5, false);
    //lesPieces.push_back(pio_n6);

    Pion pio_n7(6, 6, 6, false);
    //lesPieces.push_back(pio_n7);

    Pion pio_n8(7, 6, 7, false);
    //lesPieces.push_back(pio_n8);

    // tours
    Tour tou_n1(8, 7, 0, false);
    //lesPieces.push_back(tou_n1);

    Tour tou_n2(9, 7, 7, false);
    //lesPieces.push_back(tou_n2);

    // cavaliers
    Cavalier cav_n1(10, 7, 1, false);
    //lesPieces.push_back(cav_n1);

    Cavalier cav_n2(11, 7, 6, false);
    //lesPieces.push_back(cav_n2);

    // fous
    Fou fou_n1(12, 7, 2, false);
    //lesPieces.push_back(fou_n1);

    Fou fou_n2(13, 7, 5, false);
    //lesPieces.push_back(fou_n2);

    // roi et reine
    Roi roi_n(14, 7, 4, false);
    //lesPieces.push_back(roi_n);

    Reine rei_n(15, 7, 3, false);
    //lesPieces.push_back(rei_n);

    // création pièces blanches
    // pions
    Pion pio_b1(16, 1, 0, true);
    //lesPieces.push_back(pio_b1);

    Pion pio_b2(17, 1, 1, true);
    //lesPieces.push_back(pio_b2);

    Pion pio_b3(18, 1, 2, true);
    //lesPieces.push_back(pio_b3);

    Pion pio_b4(19, 1, 3, true);
    //lesPieces.push_back(pio_b4);

    Pion pio_b5(20, 1, 4, true);
    //lesPieces.push_back(pio_b5);

    Pion pio_b6(21, 1, 5, true);
    //lesPieces.push_back(pio_b6);

    Pion pio_b7(22, 1, 6, true);
    //lesPieces.push_back(pio_b7);

    Pion pio_b8(23, 1, 7, true);
    //lesPieces.push_back(pio_b8);

    // tours
    Tour tou_b1(24, 0, 0, true);
    //lesPieces.push_back(tou_b1);

    Tour tou_b2(25, 0, 7, true);
    //lesPieces.push_back(tou_b2);

    // cavaliers
    Cavalier cav_b1(26, 0, 1, true);
    //lesPieces.push_back(cav_b1);

    Cavalier cav_b2(27, 0, 6, true);
    //lesPieces.push_back(cav_b2);

    // fous
    Fou fou_b1(28, 0, 2, true);
    //lesPieces.push_back(fou_b1);

    Fou fou_b2(29, 0, 5, true);
    //lesPieces.push_back(fou_b2);

    // roi et reine
    Roi roi_b(30, 0, 4, true);
    //lesPieces.push_back(roi_b);

    Reine rei_b(31, 0, 3, true);
    //lesPieces.push_back(rei_b);

    Piece listePieces[32] = {pio_n1, pio_n2, pio_n3, pio_n4, pio_n5, pio_n6,
                             pio_n7, pio_n8, tou_n1, tou_n2, cav_n1, cav_n2,
                             fou_n1, fou_n2, roi_n, rei_n, pio_b1, pio_b2,
                             pio_b3, pio_b4, pio_b5, pio_b6, pio_b7, pio_b8,
                             tou_b1, tou_b2, cav_b1, cav_b2, fou_b1, fou_b2,
                             roi_b, rei_b};

    Plateau();
}
