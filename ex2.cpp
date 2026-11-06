
#include <iostream>
using namespace std;

class Date {
private:
    int jour;
    int mois;
    int annee;

public:
    // Constructeur
    Date(int j, int m, int a) {
        jour = j;
        mois = m;
        annee = a;
    }

    // Surcharge de l'operateur ==
    bool operator==(const Date& d) const {
        return (jour == d.jour &&
                mois == d.mois &&
                annee == d.annee);
    }

    // Surcharge de l'operateur !=
    bool operator!=(const Date& d) const {
        return !(*this == d);
    }

    // Methode afficher
    void afficher() const {
        cout << jour << "/" << mois << "/" << annee << endl;
    }
};

int main() {
    int j1, m1, a1;
    int j2, m2, a2;

    // Saisie de la premiere date
    cout << "Donner le jour, mois et annee de la premiere date : ";
    cin >> j1 >> m1 >> a1;

    // Saisie de la deuxieme date
    cout << "Donner le jour, mois et annee de la deuxieme date : ";
    cin >> j2 >> m2 >> a2;

    // Creation des objets
    Date d1(j1, m1, a1);
    Date d2(j2, m2, a2);

    // Affichage des dates
    cout << "\nPremiere date : ";
    d1.afficher();

    cout << "Deuxieme date : ";
    d2.afficher();

    // Comparaison avec ==
    if (d1 == d2) {
        cout << "Les deux dates sont identiques." << endl;
    }
    else {
        cout << "Les deux dates sont differentes." << endl;
    }

    // Comparaison avec !=
    if (d1 != d2) {
        cout << "L'operateur != : Les dates sont differentes." << endl;
    }
    else {
        cout << "L'operateur != : Les dates sont identiques." << endl;
    }

    return 0;
}
