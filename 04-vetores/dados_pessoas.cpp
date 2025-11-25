#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int N;
    cout << "Quantas pessoas serao digitadas? ";
    cin >> N;

    double altura[N];
    char genero[N];

    for (int i = 0; i < N; i++) {
        cout << "Altura da " << i+1 << "a pessoa: ";
        cin >> altura[i];
        cout << "Genero da " << i+1 << "a pessoa: ";
        cin >> genero[i];
    }

    double menor = altura[0], maior = altura[0];
    double somaMulheres = 0;
    int contMulheres = 0, contHomens = 0;

    for (int i = 0; i < N; i++) {
        if (altura[i] < menor) menor = altura[i];
        if (altura[i] > maior) maior = altura[i];

        if (genero[i] == 'F' || genero[i] == 'f') {
            somaMulheres += altura[i];
            contMulheres++;
        } else {
            contHomens++;
        }
    }

    cout << fixed << setprecision(2);
    cout << "Menor altura = " << menor << endl;
    cout << "Maior altura = " << maior << endl;

    if (contMulheres > 0) {
        cout << "Media das alturas das mulheres = " 
             << somaMulheres / contMulheres << endl;
    }

    cout << "Numero de homens = " << contHomens << endl;

    return 0;
}
