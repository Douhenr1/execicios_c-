#include <iostream>
#include <iomanip>

    using namespace std;

int main (){

    double pl_unit, din_recebido, troco;
    int qtd_comprada;

    cout << "Preço unitario do produto: " << endl;
    cin >> pl_unit;

    cout << "Quantidade comprada: " << endl;
    cin >> qtd_comprada;

    cout << "Dinheiro recebido" <<endl;
    cin >> din_recebido;

    troco = din_recebido - (pl_unit * qtd_comprada);


    if (troco < din_recebido) 
    {
        cout << fixed << setprecision(2);
        cout << "TROCO = " << troco << endl;

    } else {
        cout << "Dinheiro insuficiente fatam " << troco << "REAIS" << endl;
    }
    

    return 0;
}