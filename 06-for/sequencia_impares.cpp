#include <iostream>
using namespace std;

int main() {
    int X;
    cout << "Digite o valor de X: ";
    cin >> X;

    for (int i = 1; i <= X; i += 2) {
        cout << i << endl;
    }

    return 0;
}