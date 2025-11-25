#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int N;
    cout << "Serao digitados dados de quantos produtos? ";
    cin >> N;

    string nome[N];
    double compra[N], venda[N];

    for (int i = 0; i < N; i++) {
        cout << "Produto " << i+1 << ":\n";
        cout << "Nome: ";
        cin >> nome[i];
        cout << "Preco de compra: ";
        cin >> compra[i];
        cout << "Preco de venda: ";
        cin >> venda[i];
    }

    int abaixo10 = 0, entre10e20 = 0, acima20 = 0;
    double totalCompra = 0, totalVenda = 0;

    for (int i = 0; i < N; i++) {
        double lucro = venda[i] - compra[i];
        double porcent = lucro / compra[i] * 100.0;

        if (porcent < 10) abaixo10++;
        else if (porcent <= 20) entre10e20++;
        else acima20++;

        totalCompra += compra[i];
        totalVenda += venda[i];
    }

    cout << "\nRELATORIO:\n";
    cout << "Lucro abaixo de 10%: " << abaixo10 << endl;
    cout << "Lucro entre 10% e 20%: " << entre10e20 << endl;
    cout << "Lucro acima de 20%: " << acima20 << endl;

    cout << fixed << setprecision(2);
    cout << "Valor total de compra: " << totalCompra << endl;
    cout << "Valor total de venda: " << totalVenda << endl;
    cout << "Lucro total: " << totalVenda - totalCompra << endl;

    return 0;
}
