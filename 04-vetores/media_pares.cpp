#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int N;
    cout << "Quantos elementos vai ter o vetor? ";
    cin >> N;

    int vet[N], soma = 0, cont = 0;

    for (int i = 0; i < N; i++) {
        cout << "Digite um numero: ";
        cin >> vet[i];
        if (vet[i] % 2 == 0) {
            soma += vet[i];
            cont++;
        }
    }

    if (cont == 0) {
        cout << "NENHUM NUMERO PAR\n";
    } else {
        cout << fixed << setprecision(1);
        cout << "MEDIA DOS PARES = " << (double)soma / cont << endl;
    }

    return 0;
}
