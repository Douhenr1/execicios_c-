#include <stdio.h>
#include <iostream>
#include <iomanip>

    using namespace std;
    
int main() {
 
    double nota1, nota2, final;

    cout << "Digite a primeira nota: " << endl;
    cin >> nota1;

    cout << "Digite a segunda nota: " << endl;
    cin >> nota2;

    final = (nota1 + nota2) / 2;

 if ( final < 6.0)
 {
    cout << "Reprovado" << endl;
 }

    cout << "Nota final = " << final << endl;
 
    
    return 0;
}