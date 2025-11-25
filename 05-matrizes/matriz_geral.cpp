#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int N;
    double mat[10][10];

    cout << "Qual a ordem da matriz? ";
    cin >> N;

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cout << "Elemento [" << i << "," << j << "]: ";
            cin >> mat[i][j];
        }
    }

    // a) Soma positivos
    double somaPos = 0;
    for (int i = 0; i < N; i++)
        for (int j = 0; j < N; j++)
            if (mat[i][j] > 0)
                somaPos += mat[i][j];

    cout << "SOMA DOS POSITIVOS: " << somaPos << endl;

    // b) Imprimir linha
    int linha;
    cout << "Escolha uma linha: ";
    cin >> linha;

    cout << "LINHA ESCOLHIDA: ";
    for (int j = 0; j < N; j++)
        cout << mat[linha][j] << " ";
    cout << endl;

    // c) Imprimir coluna
    int coluna;
    cout << "Escolha uma coluna: ";
    cin >> coluna;

    cout << "COLUNA ESCOLHIDA: ";
    for (int i = 0; i < N; i++)
        cout << mat[i][coluna] << " ";
    cout << endl;

    // d) Diagonal principal
    cout << "DIAGONAL PRINCIPAL: ";
    for (int i = 0; i < N; i++)
        cout << mat[i][i] << " ";
    cout << endl;

    // e) Quadrado dos negativos
    cout << "MATRIZ ALTERADA:\n";
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            if (mat[i][j] < 0)
                mat[i][j] = pow(mat[i][j], 2);
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
