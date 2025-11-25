#include <iostream>
using namespace std;

int main() {
    int N;
    cout << "Quantos casos de teste serao digitados? ";
    cin >> N;

    int quantidade;
    char tipo;

    int totalC = 0, totalR = 0, totalS = 0;

    for (int i = 0; i < N; i++) {
        cout << "Quantidade de cobaias: ";
        cin >> quantidade;

        cout << "Tipo de cobaia: ";
        cin >> tipo;

        if (tipo == 'C') totalC += quantidade;
        else if (tipo == 'R') totalR += quantidade;
        else if (tipo == 'S') totalS += quantidade;
    }

    int total = totalC + totalR + totalS;

    cout << "RELATORIO FINAL:" << endl;
    cout << "Total: " << total << " cobaias" << endl;
    cout << "Total de coelhos: " << totalC << endl;
    cout << "Total de ratos: " << totalR << endl;
    cout << "Total de sapos: " << totalS << endl;

    cout << fixed;
    cout.precision(2);

    cout << "Percentual de coelhos: " << (totalC * 100.0 / total) << endl;
    cout << "Percentual de ratos: " << (totalR * 100.0 / total) << endl;
    cout << "Percentual de sapos: " << (totalS * 100.0 / total) << endl;

    return 0;
}