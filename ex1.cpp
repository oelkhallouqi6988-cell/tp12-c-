
#include <iostream>
using namespace std;

class Vecteur2D {
private:
    double x;
    double y;

public:
    // Constructeur
    Vecteur2D(double a, double b) {
        x = a;
        y = b;
    }

    // Surcharge de l'operateur +
    Vecteur2D operator+(const Vecteur2D& v) const {
        return Vecteur2D(x + v.x, y + v.y);
    }

    // Methode afficher
    void afficher() const {
        cout << "(" << x << ", " << y << ")" << endl;
    }
};

int main() {
    double a, b, c, d;

    // Saisie du premier vecteur
    cout << "Donner x et y du premier vecteur : ";
    cin >> a >> b;

    // Saisie du deuxieme vecteur
    cout << "Donner x et y du deuxieme vecteur : ";
    cin >> c >> d;

    // Creation des vecteurs
    Vecteur2D v1(a, b);
    Vecteur2D v2(c, d);

    // Addition
    Vecteur2D v3 = v1 + v2;

    // Affichage
    cout << "\nPremier vecteur : ";
    v1.afficher();

    cout << "Deuxieme vecteur : ";
    v2.afficher();

    cout << "Resultat de l'addition : ";
    v3.afficher();

    return 0;
}
