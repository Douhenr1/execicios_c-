#include <iostream>
#include <iomanip> 



using namespace std;

        int main (){

            double a, b, c, area_quadrado, area_tringulo, area_trapezio;

            cout << "Digite a medida A: " << endl;
            cin >> a;

            cout << "Digite a medida B: " <<endl;
            cin >> b;

            cout << "Digite a medida C: " <<endl;
            cin >> c;

            area_quadrado = a * a;

            area_tringulo = (a * b ) / 2;

            area_trapezio = ((a + b) * c ) / 2;

            cout << fixed << setprecision(3);

            cout << "Area do Quadrado: " << area_quadrado << endl;
            cout << "Area do Tringulo: " << area_tringulo << endl;
            cout << "Area do Trapezio: " << area_trapezio << endl;


return 0;    

        }