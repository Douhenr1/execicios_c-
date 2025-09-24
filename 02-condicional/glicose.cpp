#include <iostream>
#include <iomanip>

using namespace std;

    int main () {

        double media;

        cout << "Digite a medida da glicose: " << endl;
        cin >> media;


        if (media <= 100)
        {
            cout << "Classificacao: normal  " << endl;

        } else if ((media > 100) && (media <= 140))
        {
            cout << "Classificacao: elevado " << endl;       
        } else
        {
            cout << "Classificacao: diabetes " << endl;
        }
        
        
        return (0);
    }