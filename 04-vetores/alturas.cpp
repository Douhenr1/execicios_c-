#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int N;
    cout << "Quantas pessoas serao digitadas? ";
    cin >> N;

    string nome[N];
    int idade[N];
    double altura[N];

    for (int i = 0; i < N; i++) {
        cout << "Dados da " << i+1 << "a pessoa:\n";
        cout << "Nome: ";
        cin >> nome[i];
        cout << "Idade: ";
        cin >> idade[i];
        cout << "Altura: ";
        cin >> altura[i];
    }

    double somaAltura = 0;
    int contMenor16 = 0;

    for (int i = 0; i < N; i++) {
        somaAltura += altura[i];
        if (idade[i] < 16) contMenor16++;
    }

    double media = somaAltura / N;
    double porcentagem = (double)contMenor16 * 100.0 / N;

    cout << fixed << setprecision(2);
    cout << "Altura media: " << media << endl;

    cout << fixed << setprecision(1);
    cout << "Pessoas com menos de 16 anos: " << porcentagem << "%\n";

    for (int i = 0; i < N; i++) {
        if (idade[i] < 16)
            cout << nome[i] << endl;
    }

    return 0;
}
