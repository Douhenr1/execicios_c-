#include <iostream>
#include <iomanip>


    using namespace std;
int main() {

    double A, B, C, maior;


    cout<< "Digite as tres distancias: " << endl;

    cin >> A;
    cin >> B;
    cin >> C;

    if ((A > B) && (A > C)){
        maior = A;
    } else if (B > C){
        maior = B;
    } else{
        maior = C;
    }
        cout << fixed << setprecision (2);
        cout << "A maior distancia é: " << maior << endl;
    
    return 0;
}