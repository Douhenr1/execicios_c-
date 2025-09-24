#include <iostream>

using namespace std;

int main (){

    double pl_basico, vl_pagar;
    int minutos;

    cout << "Digite a quantidade de minutos: " << endl;
    cin >> minutos;

    pl_basico = 50.00;

    if ( 100 > minutos)
    {
        vl_pagar = pl_basico + 2.00;
        cout << "Valor a pagar: " << vl_pagar << endl;

    }  else{
        cout << "Valor a pagar: " << pl_basico << endl;

    }
    
    return(0);
}