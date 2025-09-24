#include <iostream>

using namespace std;

int main (){

    double preco_unitario, din_recebido, troco;
    int qtd;
    
    cout << "Preço unitario do produto: ";
    cin >> preco_unitario; 

    cout << "Quantidade comprada: ";
    cin >> qtd;

    cout << "Dinheiro recebido: ";
    cin >> din_recebido;

    troco = din_recebido - (preco_unitario * qtd);

    cout << "o meu troco é " << troco;

    return 0;
}