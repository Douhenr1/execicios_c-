#include <iostream>
using namespace std;

void lerFuncionario(string &nome, double &valorHora, double &horas) {
    cout << "Nome: ";
    cin.ignore();
    getline(cin, nome);

    cout << "Valor por hora: ";
    cin >> valorHora;

    cout << "Horas trabalhadas: ";
    cin >> horas;
}

double calcularPagamento(double valorHora, double horas) {
    return valorHora * horas;
}

void mostrarPagamento(string nome, double pagamento) {
    cout << "O pagamento para " << nome << " deve ser R$ " << pagamento << endl;
}

int main() {
    string nome;
    double valorHora, horas;

    lerFuncionario(nome, valorHora, horas);
    double sal = calcularPagamento(valorHora, horas);
    mostrarPagamento(nome, sal);

    return 0;
}
