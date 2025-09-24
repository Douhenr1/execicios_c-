#include <iostream> 
#include <iomanip>
#include <cmath> 

using namespace std;

int main (){
    float base, altura, area, perimetro, diagonal;

    cout << "Digite a base do retangulo";
    cin >> base;

    cout << "Digite a altura do retangulo";
    cin >> altura;


    area = base * altura;
    perimetro = 2 * (base * altura);
    diagonal = sqrt(pow(base, 2) + pow(altura, 2)); 

    cout << fixed << setprecision (2);
    cout << "area do retangulo" << area << endl;
    cout << "perimetro retangulo" << perimetro << endl;
    cout << "Diagonal do retangulo" << diagonal << endl;

    return 0;
}