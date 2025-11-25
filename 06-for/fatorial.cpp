#include <iostream>
using namespace std;

int main() {
    int N;
    cout << "Digite o valor de N: ";
    cin >> N;

    int fat = 1;

    for (int i = 1; i <= N; i++) {
        fat *= i;
    }

    cout << "FATORIAL = " << fat << endl;

    return 0;
}