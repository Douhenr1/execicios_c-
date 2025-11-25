#include <iostream>
using namespace std;

int main() {
    int M, N;
    double mat[10][10], vet[10];

    cout << "Qual a quantidade de linhas da matriz? ";
    cin >> M;
    cout << "Qual a quantidade de colunas da matriz? ";
    cin >> N;

    for (int i = 0; i < M; i++) {
        cout << "Digite os elementos da " << i + 1 << "a. linha:\n";
        double soma = 0;
        for (int j = 0; j < N; j++) {
            cin >> mat[i][j];
            soma += mat[i][j];
        }
        vet[i] = soma;
    }

    cout << "VETOR GERADO:\n";
    for (int i = 0; i < M; i++) {
        cout << vet[i] << endl;
    }

    return 0;
}
