#include <iostream>

using namespace std;

int main () {

    /* 
    3: Implemente un programa que convierta centímetros en pulgadas
    */

    float centimetros, pulgadas;

    // 1 cm es equivalente a 0.393701 pulgadas
    // Una pulgada equivale a 2.54 centímetros

    cout << "CONVERSOR DE CENTIMETROS A PULGADAS: " << endl;
        cout << "centimetros: ";
            cin >> centimetros;

    pulgadas = centimetros * 0.393701;

    cout << "pulgadas = " << pulgadas << endl;
    

    return 0;
}