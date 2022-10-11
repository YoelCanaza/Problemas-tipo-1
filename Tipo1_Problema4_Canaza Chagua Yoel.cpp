#include <iostream>
#include <cmath>

using namespace std;

int main () {


/* 
4: Implemente un programa que calcule el área y el perímetro de un cuadrado, rectángulo y
triangulo
*/
    float ladoA = 0;
    float ladoB = 0;
    float ladoC = 0;
    
    int opcion = 0;

    float perimetroCuadrado;
    float areaCuadrado;

    float perimetroRectangulo;
    float areaRectangulo;

    float perimetroTriangulo;
    float s; // s tomara el valor de: perimetroTriangulo / 2
    float areaTriangulo;

    cout << "Este programa calcula el area y perimetro de un:" << endl;
        cout << " 1: CUADRADO" << endl;
        cout << " 2: RECTANGULO" << endl;
        cout << " 3: TRIANGULO" << endl;

    cout << "Escriba un numero del 1 al 3 pare elegir su opcion: ";
        cin >> opcion;

    switch (opcion) {
        case 1:
            cout << "Ingrese el lado del CUADRADO: ";
                cin >> ladoA;
            perimetroCuadrado = ladoA * 4;
            areaCuadrado = ladoA * ladoA;

            cout << "El area del cuadrado es: " << areaCuadrado << " u2" << endl;
            cout << "El perimetro del cuadrado es: " << perimetroCuadrado << " u" << endl;
            break;
        case 2:
            cout << "Ingrese la base del RECTANGULO: ";
                cin >> ladoA;
            cout << "Ingrese la altura del RECTANGULO: ";
                cin >> ladoB;
            perimetroRectangulo = (ladoA * 2) + (ladoB * 2);
            areaRectangulo = ladoB * ladoA;

            cout << "El area del rectangulo es: " << areaRectangulo << " u2" << endl;
            cout << "El perimetro del rectangulo es: " << perimetroRectangulo << " u" << endl;
            break;
        case 3:
            cout << "Ingrese el primer lado del TRIANGULO: ";
                cin >> ladoA;
            cout << "Ingrese el segundo lado del TRIANGULO: ";
                cin >> ladoB;
            cout << "Ingrese el tercer lado del TRIANGULO: ";
                cin >> ladoC;

            perimetroTriangulo = ladoA + ladoB + ladoC;
            s = perimetroTriangulo / 2;
            // para el area del triangulo usaremos la fórmula de Herón
            areaTriangulo = sqrt(s*(s-ladoA)*(s-ladoB)*(s-ladoC));

            cout << "El area del triangulo es: " << areaTriangulo << " u2" << endl;
            cout << "El perimetro del triangulo es: " << perimetroTriangulo << " u" << endl;
            break;
        default:
            cout << "Opcion no valida, escriba unicamente un numero del 1 al 3" << endl;
    }

    return 0;
}