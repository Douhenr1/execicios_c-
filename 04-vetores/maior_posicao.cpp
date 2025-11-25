#include <iostream>
using namespace std;

int main() {
    int N;
    cout << "Quanto numeros voce vai digitar? ";
    cin >> N;

    double vet[N];

    for (int i = 0; i < N; i++) {
        cout << "Digite um numero: ";
        cin >> vet[i];
    }

    double maior = vet[0];
    int pos = 0;

    for (int i = 1; i < N; i++) {
        if (vet[i] > maior) {
            maior = vet[i];
            pos = i;
        }
    }

    cout << "MAIOR VALOR = " << maior << endl;
    cout << "POSICAO DO MAIOR VALOR = " << pos << endl;

    return 0;
}
