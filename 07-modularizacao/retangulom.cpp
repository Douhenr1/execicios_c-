#include <iostream>
#include <cmath>
using namespace std;

double area(double base, double altura) {
    return base * altura;
}

double perimetro(double base, double altura) {
    return 2 * (base + altura);
}

double diagonal(double base, double altura) {
    return sqrt(base*base + altura*altura);
}

int main() {
    double base, altura;

    cout << "Base do retangulo: ";
    cin >> base;
    cout << "Altura do retangulo: ";
    cin >> altura;

    cout << "AREA = " << area(base, altura) << endl;
    cout << "PERIMETRO = " << perimetro(base, altura) << endl;
    cout << "DIAGONAL = " << diagonal(base, altura) << endl;

    return 0;
}
