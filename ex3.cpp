
#include <iostream>
#include <stdexcept>
using namespace std;

class Tableau {
private:
    int* data;
    int taille;

public:
    // Constructeur
    Tableau(int t) {
        taille = t;
        data = new int[taille];

        for (int i = 0; i < taille; i++) {
            data[i] = 0;
        }
    }

    // Surcharge de l'operateur []
    int& operator[](int indice) {
        if (indice < 0 || indice >= taille) {
            throw out_of_range("Indice invalide !");
        }

        return data[indice];
    }

    // Destructeur
    ~Tableau() {
        delete[] data;
    }
};

int main() {
    int n;

    cout << "Donner la taille du tableau : ";
    cin >> n;

    if (n <= 0) {
        cout << "Taille invalide !" << endl;
        return 1;
    }

    Tableau t(n);

    // Remplissage du tableau
    cout << "\nDonner les elements du tableau :" << endl;

    for (int i = 0; i < n; i++) {
        cout << "Element [" << i << "] : ";
        cin >> t[i];
    }

    // Affichage du tableau
    cout << "\nLes elements du tableau sont :" << endl;

    try {
        for (int i = 0; i < n; i++) {
            cout << t[i] << " ";
        }

        cout << endl;

        // Test d'un indice invalide
        cout << "\nAcces a l'indice " << n << " :" << endl;
        cout << t[n] << endl;
    }
    catch (const out_of_range& e) {
        cout << "Erreur : " << e.what() << endl;
    }

    return 0;
}
