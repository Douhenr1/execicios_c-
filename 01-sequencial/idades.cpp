#include <iostream>
#include <iomanip>
using namespace std;

int main (){

    int idade1, idade2;
    string nome1, nome2;
    double media_idades;

    cout << "Dados da primeira pessoa" << endl;

    cout << "nome: ";
    cin >> nome1;
    getline(cin,nome1)

    cout << "idade: ";
    cin >> idade1;


    cout << "nome: ";
    cin >> nome2;
    getline(cin, nome2)

    cout << "idade: ";
    cin >> idade2;

    media_idades = (idade1 + idade2) / 2;

    cout << " A idade media de " << nome1 <<  " e "  << nome2 << " de " << media_idades << " anos " << endl;

return 0;


}