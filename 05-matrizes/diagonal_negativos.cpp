#include <iostream>
using namespace std;

int main() {
    int N, neg = 0;
    int mat[10][10];

    cout << "Qual a ordem da matriz? ";
    cin >> N;

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cout << "Elemento [" << i << "," << j << "]: ";
            cin >> mat[i][j];
            if (mat[i][j] < 0) neg++;
        }
    }

    cout << "DIAGONAL PRINCIPAL:\n";
    for (int i = 0; i < N; i++) {
        cout << mat[i][i] << " ";
    }

    cout << "\nQUANTIDADE DE NEGATIVOS = " << neg << endl;

    return 0;
}
