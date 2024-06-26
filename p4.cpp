#include <iostream>
#include <cmath>

using namespace std;

int main(){
    // Calcular las raices de la ecuacion cuadratica
    double a, b, c, x1, x2;
    cout << "Programa para calcular las raices de una ecuacion cuadratica" << endl;
    cout << "Ecuacion: ax^2 + bx + c = 0" << endl;
    cout << "Ingrese el valor de a: ", cin >> a;
    cout << "Ingrese el valor de b: ", cin >> b;
    cout << "Ingrese el valor de c: ", cin >> c;
    x1 = (-b + sqrt(pow(b, 2) - 4*a*c)) / (2*a);
    x2 = (-b - sqrt(pow(b, 2) - 4*a*c)) / (2*a);
    cout << "Las raices son: " << x1 << " y " << x2 << endl;

    return 0;
}