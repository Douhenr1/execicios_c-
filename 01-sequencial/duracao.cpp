#include <iostream>
#include <iomanip> 



using namespace std;
    int main (){

        int tempo, horas, minutos, segundos;

        cout << "Digite a duracao em segundos: " << endl;
        cin >> tempo;



        horas = tempo / 3600;
        minutos = (tempo % 3600) / 60;
        segundos = tempo % 60;

        cout << horas << ":" << minutos << ":" << segundos;

        return 0;
    }