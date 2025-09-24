#include <iomanip>
#include <iostream>

using namespace std;

int main() {
    char escala;
    double temperatura, resultado;

    cout << "Voce vai digitar a temperatura em qual escala (C/F)? ";
    cin >> escala;

    if (escala == 'F' || escala == 'f') {
        cout << "Digite a temperatura em Fahrenheit: ";
        cin >> temperatura;
        
        // Fórmula: C = (F - 32) × 5/9
        resultado = (temperatura - 32.0) * 5.0 / 9.0;
        
        cout << fixed << setprecision(2);
        cout << "Temperatura equivalente em Celsius: " << resultado << endl;
    }
    else if (escala == 'C' || escala == 'c') {
        cout << "Digite a temperatura em Celsius: ";
        cin >> temperatura;
        
        // Fórmula: F = C × 9/5 + 32
        resultado = temperatura * 9.0 / 5.0 + 32.0;
        
        cout << fixed << setprecision(2);
        cout << "Temperatura equivalente em Fahrenheit: " << resultado << endl;
    }
    else {
        cout << "Escala invalida! Use C ou F." << endl;
    }

    return 0;
}