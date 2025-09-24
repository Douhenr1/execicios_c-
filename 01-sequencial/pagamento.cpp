#include <iostream>

using namespace std;

    int main (){

        int horas;
        string nome;
        double vlr_hora, pgmt;

        cout << "Qual o seu nome Funcionario ?" << endl;
        cin >> nome;

        cout << "Qual o valor da sua hora ?" <<endl;
        cin >> vlr_hora;

        cout << "Horas trabalhadas ?" <<endl;
        cin >> horas;

        pgmt = horas * vlr_hora;

        cout << "O pagamento para " << nome << "Deve ser " << pgmt;

        return 0;


        
    }