#include <iostream>
#include <vector>
using namespace std;

void lerVetor(vector<int> &v, int &n) {
    cout << "Quantos elementos? ";
    cin >> n;
    v.resize(n);

    for (int i = 0; i < n; i++) {
        cout << "Elemento " << i << ": ";
        cin >> v[i];
    }
}

double media(const vector<int> &v) {
    double soma = 0;
    for (int x : v) soma += x;
    return soma / v.size();
}

void maiorMenor(const vector<int> &v, int &maior, int &menor) {
    maior = menor = v[0];
    for (int x : v) {
        if (x > maior) maior = x;
        if (x < menor) menor = x;
    }
}

int contarPares(const vector<int> &v) {
    int cont = 0;
    for (int x : v) if (x % 2 == 0) cont++;
    return cont;
}

int main() {
    vector<int> v;
    int n;

    int opcao;
    do {
        cout << "\n===== MENU =====\n";
        cout << "1 - Ler vetor\n";
        cout << "2 - Media dos valores\n";
        cout << "3 - Maior e menor valor\n";
        cout << "4 - Contar pares\n";
        cout << "5 - Sair\n";
        cout << "Escolha: ";
        cin >> opcao;

        switch(opcao) {
        case 1:
            lerVetor(v, n);
            break;

        case 2:
            if (!v.empty())
                cout << "MEDIA = " << media(v) << endl;
            else
                cout << "Vetor vazio!\n";
            break;

        case 3:
            if (!v.empty()) {
                int maior, menor;
                maiorMenor(v, maior, menor);
                cout << "MAIOR = " << maior << ", MENOR = " << menor << endl;
            } else
                cout << "Vetor vazio!\n";
            break;

        case 4:
            if (!v.empty())
                cout << "PARES = " << contarPares(v) << endl;
            else
                cout << "Vetor vazio!\n";
            break;

        case 5:
            cout << "Saindo...\n";
            break;

        default:
            cout << "Opcao invalida!\n";
        }

    } while (opcao != 5);

    return 0;
}
