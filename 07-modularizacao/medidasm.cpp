#include <iostream>
using namespace std;

double areaQuadrado(double x) {
    return x * x;
}

double areaTriangulo(double base, double altura) {
    return (base * altura) / 2.0;
}

double areaTrapezio(double baseMaior, double baseMenor, double altura) {
    return (baseMaior + baseMenor) * altura / 2.0;
}

int main() {
    double x, b, h, B;

    cout << "Digite a medida X: ";
    cin >> x;

    cout << "Digite a base e altura do triangulo: ";
    cin >> b >> h;

    cout << "Digite a base maior, base menor e altura do trapezio: ";
    cin >> B >> b >> h;

    cout << "AREA DO QUADRADO = " << areaQuadrado(x) << endl;
    cout << "AREA DO TRIANGULO = " << areaTriangulo(b, h) << endl;
    cout << "AREA DO TRAPEZIO = " << areaTrapezio(B, b, h) << endl;

    return 0;
}
