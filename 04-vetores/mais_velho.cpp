#include <iostream>
using namespace std;

int main() {
    int N;
    cout << "Quantas pessoas voce vai digitar? ";
    cin >> N;

    string nome[N];
    int idade[N];

    for (int i = 0; i < N; i++) {
        cout << "Dados da " << i+1 << "a pessoa:\n";
        cout << "Nome: ";
        cin >> nome[i];
        cout << "Idade: ";
        cin >> idade[i];
    }

    int maior = idade[0];
    int pos = 0;

    for (int i = 1; i < N; i++) {
        if (idade[i] > maior) {
            maior = idade[i];
            pos = i;
        }
    }

    cout << "PESSOA MAIS VELHA: " << nome[pos] << endl;

    return 0;
}
