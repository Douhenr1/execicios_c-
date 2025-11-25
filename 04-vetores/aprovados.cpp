#include <iostream>
using namespace std;

int main() {
    int N;
    cout << "Quantos alunos serao digitados? ";
    cin >> N;

    string nome[N];
    double n1[N], n2[N];

    for (int i = 0; i < N; i++) {
        cout << "Digite nome, primeira e segunda nota do " << i+1 << "o aluno:\n";
        cin.ignore();
        getline(cin, nome[i]);
        cin >> n1[i];
        cin >> n2[i];
    }

    cout << "Alunos aprovados:\n";
    for (int i = 0; i < N; i++) {
        double media = (n1[i] + n2[i]) / 2;
        if (media >= 6.0) {
            cout << nome[i] << endl;
        }
    }

    return 0;
}
