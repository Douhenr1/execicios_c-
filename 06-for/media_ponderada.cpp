#include <iostream>
using namespace std;

int main() {
    int N;
    cout << "Quantos casos voce vai digitar? ";
    cin >> N;

    float a, b, c, media;

    for (int i = 0; i < N; i++) {
        cout << "Digite tres numeros:" << endl;
        cin >> a >> b >> c;

        media = (a*2 + b*3 + c*5) / 10.0;

        cout << "MEDIA = " << fixed;
        cout.precision(1);
        cout << media << endl;
    }

    return 0;
}