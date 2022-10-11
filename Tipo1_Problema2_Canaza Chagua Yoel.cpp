#include <iostream>

using namespace std;

int main () {

    /*
    2: Implemente un programa que intercambie el contenido o valor de dos variables
    */
    int a, b, c;

    a = 3;
    b = 9;
    c = a;
    
    cout << "Valores iniciales: " << endl;
        cout << "a = " << a << endl;
        cout << "b = " << b << endl;

    a = b;
    b = c;

    cout << "Valores intercambiados: " << endl;
        cout << "a = " << a << endl;
        cout << "b = " << b << endl;

    return 0;
}