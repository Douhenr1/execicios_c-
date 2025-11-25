#include <iostream>
using namespace std;

int main() {
    int N;
    cout << "Quantos casos voce vai digitar? ";
    cin >> N;

    double numerador, denominador;

    for (int i = 0; i < N; i++) {
        cout << "Entre com o numerador: ";
        cin >> numerador;

        cout << "Entre com o denominador: ";
        cin >> denominador;

        if (denominador == 0) {
            cout << "DIVISAO IMPOSSIVEL" << endl;
        } else {
            double resultado = numerador / denominador;
            cout << "DIVISAO = " << fixed;
            cout.precision(2);
            cout << resultado << endl;
        }
    }

    return 0;
}