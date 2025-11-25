#include <iostream>
using namespace std;

int main() {
    int X, Y;
    cout << "Digite dois numeros:" << endl;
    cin >> X >> Y;

    int soma = 0;

    int menor = min(X, Y);
    int maior = max(X, Y);

    for (int i = menor + 1; i < maior; i++) {
        if (i % 2 != 0) {
            soma += i;
        }
    }

    cout << "SOMA DOS IMPARES = " << soma << endl;

    return 0;
}