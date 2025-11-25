#include <iostream>
using namespace std;

struct Aluno {
    string nome;
    double nota1;
    double nota2;
};

int main() {
    int N;
    cout << "Quantos alunos serao digitados? ";
    cin >> N;

    Aluno vet[N];

    for (int i = 0; i < N; i++) {
        cout << "Digite nome, primeira e segunda nota do " << i+1 << "o aluno:\n";
        cin.ignore();
        getline(cin, vet[i].nome);
        cin >> vet[i].nota1 >> vet[i].nota2;
    }

    cout << "\nAlunos aprovados:\n";
    for (int i = 0; i < N; i++) {
        double media = (vet[i].nota1 + vet[i].nota2) / 2.0;
        if (media >= 6.0) {
            cout << vet[i].nome << endl;
        }
    }

    return 0;
}
