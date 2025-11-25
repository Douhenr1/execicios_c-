#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int N;
    cout << "Quantos numeros voce vai digitar? ";
    cin >> N;

    double vet[N], soma = 0;

    for (int i = 0; i < N; i++) {
        cout << "Digite um numero: ";
        cin >> vet[i];
        soma += vet[i];
    }

    cout << "VALORES = ";
    for (int i = 0; i < N; i++) {
        cout << vet[i] << " ";
    }

    double media = soma / N;

    cout << fixed << setprecision(2);
    cout << "\nSOMA = " << soma << endl;
    cout << "MEDIA = " << media << endl;

    return 0;
}