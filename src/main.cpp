#include <iostream>

// #include "Pays.hpp"
#include "Joueur.hpp"

using namespace std;

int main(int, char **)
{

    cout << "Hello world !" << endl;

    Pays *p = new Pays{5, "France", 100, RessourceBase::RB0};
    Pays *p2 = new Pays{1, "Pologne", 5, RessourceBase::RB2};

    Joueur j{p};
    p2->nouveauTour();
    j.nouveauTour();
    j.setStockRBi(3, 4);
    j.setStockRBi(4, 4);
    j.setStockRBi(5, 3);
    j.setStockRBi(6, 2);
    j.setStockRBi(1, 4);
    j.setStockRBi(8, 0);
    j.setStockRCi(0,3);
 

    for (int i = 0; i < 9; i++)
        cout << j.getStockRBi(i) << " ";

    cout << endl;
    for (int i = 0; i < 3; i++)
        cout << j.getStockRCi(i) << " ";
    cout << endl;

    cout << endl
         << "pt : " << j.getPtAction() << "  RB dispo : " << p2->getRessourceDispo() << endl;

    /**************** DEBUT ACTION ******************/
    // cout << j.acheter(*p2);

    cout << j.transformerRessource();

    /***************** FIN ACTION ******************/

    cout << endl
         << "pt : " << j.getPtAction() << "  RB dispo : " << p2->getRessourceDispo() << endl;

    cout << "achat" << endl;
    for (int i = 0; i < 9; i++)
        cout << j.getStockRBi(i) << " ";

    cout << endl;
    for (int i = 0; i < 3; i++)
        cout << j.getStockRCi(i) << " ";
    cout << endl;


    delete p;

    return 0;
}
