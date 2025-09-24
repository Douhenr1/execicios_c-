#include <iostream>

using namespace std;

int main (){

    int a, b, c, menor;

   cout << "Primeiro valor: " << endl;
   cin >> a;

   cout << "Primeiro valor: " << endl;
   cin >> b;

   cout << "Primeiro valor: " << endl; 
   cin >> c; 

    menor =a;

    if ((b < menor))
    {
        menor = b;
    }
    if ((c < menor))
    {
        menor = c;
    }
    
    cout << "MENOR = " << menor << endl;


   
    return (0);
}