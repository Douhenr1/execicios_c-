#include <iostream>
using namespace std;

int main() {
    int N;
    cout << "Quantos numeros voce vai digitar? ";
    cin >> N;

    int vet[N];

    for (int i = 0; i < N; i++) {
        cout << "Digite um numero: ";
        cin >> vet[i];
    }

    cout << "NUMEROS PARES:" << endl;
    int cont = 0;

    for (int i = 0; i < N; i++) {
        if (vet[i] % 2 == 0) {
            cout << vet[i] << " ";
            cont++;
        }
    }

    cout << "\nQUANTIDADE DE PARES = " << cont << endl;

    return 0;
}
