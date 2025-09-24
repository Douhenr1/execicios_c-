#include <iostream>
#include <iomanip> 


using namespace std;

    int main (){

        float dist_perco, cbt_gasto, csm_medio;
        string carro;


        cout << "Qual o seu carro ? " << endl;
        cin >> carro;

        cout << "Qual a distancia do carro percorrida ? " << endl;
        cin >> dist_perco;

        cout << "Qual a quantidade de combustivel gasto pelo seu carro ?" << endl;
        cin >> cbt_gasto;

        csm_medio =  dist_perco / cbt_gasto ;

        cout << fixed << setprecision(2);
        cout << "o Consumo medio do " << carro <<  " foi de: "  << csm_medio;


        return 0;
    }