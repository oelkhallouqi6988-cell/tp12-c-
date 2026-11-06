
#include <iostream>
#include <string>
using namespace std;

class Produit {
private:
    string nom;
    double prix;
    int quantite;

public:
    // Constructeur
    Produit(string n, double p, int q) {
        nom = n;
        prix = p;
        quantite = q;
    }

    // Surcharge de l'operateur <<
    friend ostream& operator<<(ostream& os, const Produit& p);
};

// Definition de la fonction amie
ostream& operator<<(ostream& os, const Produit& p) {
    os << "Nom du produit : " << p.nom << endl;
    os << "Prix : " << p.prix << " DH" << endl;
    os << "Quantite : " << p.quantite << endl;

    return os;
}

int main() {

    string nom;
    double prix;
    int quantite;

    // Saisie des informations
    cout << "Donner le nom du produit : ";
    getline(cin, nom);

    cout << "Donner le prix du produit : ";
    cin >> prix;

    cout << "Donner la quantite : ";
    cin >> quantite;

    // Creation de l'objet
    Produit p(nom, prix, quantite);

    // Affichage avec cout
    cout << "\n--- Informations du produit ---" << endl;
    cout << p;

    return 0;
}
