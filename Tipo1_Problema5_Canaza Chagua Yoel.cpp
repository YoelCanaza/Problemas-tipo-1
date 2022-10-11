#include <iostream>

using namespace std;

int main () {

    float notaExamen;
    float notaPracticas;
    float notaProyecto;

    float pondExamen;
    float pondPracticas;
    float pondProyecto;

    float promedioPonderado;

    cout << "Ingrese la nota del examen: ";
    cin >> notaExamen;

    cout << "Ingrese la nota de las practicas: ";
    cin >> notaPracticas;

    cout << "Ingrese la nota del proyecto: ";
    cin >> notaProyecto;

    pondExamen = (50/100.f) * notaExamen; /* sin el .f el numero se interpreta como un entero
    por lo que 50/100 es (int)50/(int)100 => (int)0, en lugar del deseado (float)0.5 */
    pondPracticas = (30/100.f) * notaPracticas;
    pondProyecto = (20/100.f) * notaProyecto;

    promedioPonderado = pondExamen + pondPracticas + pondProyecto;

    cout << "El promedio ponderado es: " << promedioPonderado << endl;

    return 0;
}