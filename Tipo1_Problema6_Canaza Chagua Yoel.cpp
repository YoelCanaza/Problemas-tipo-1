#include <iostream>
#include <cmath>

using namespace std;

int main () {

    float ladoA = 0;
    float ladoB = 0;
    float ladoC = 0;
    
    float perTriangulo = 0;
    float s = 0; // s tomará el valor de: perTriangulo / 2
    float areaTriangulo = 0;

    cout << "EL AREA DE UN TRIANGULO" << endl;

    cout << "Ingrese el primer lado del triangulo: ";
    cin >> ladoA;

    cout << "Ingrese el segundo lado del triangulo: ";
    cin >> ladoB;

    cout << "Ingrese el tercer lado del triangulo: ";
    cin >> ladoC;

    perTriangulo = ladoA + ladoB + ladoC;
    s = perTriangulo / 2;
    //Para calcular el área del triángulo usaremos la fórmula de Herón
    areaTriangulo = sqrt(s*(s-ladoA)*(s-ladoB)*(s-ladoC));

    cout << "El area del triangulo es: " << areaTriangulo << endl;
    

    return 0;
}
