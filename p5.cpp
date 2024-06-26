#include <iostream>
#include <cmath>
#include <complex>

using namespace std;

void calcularRaices(double a, double b, double c, double &x1, double &x2, bool &esComplejo){
    double discriminante = b*b - 4*a*c;

    if (discriminante >= 0) {
        x1 = (-b + sqrt(discriminante)) / (2*a);
        x2 = (-b - sqrt(discriminante)) / (2*a);
        esComplejo = false;
    } else {
        double realPart = -1 * b / (2*a);
        double imagPart = sqrt(-1 * discriminante) / (2*a);
        cout << "Parte real: " << realPart << endl;
        cout << "Parte imaginaria: " << imagPart << endl;
        complex<double> x1(realPart, imagPart);
        complex<double> x2(realPart, -1 * imagPart);
        esComplejo = true;
    }

}

int main(){
    double a, b, c;
    double raiz1, raiz2;
    bool complejo;
    cout << "Ingrese los coeficientes de la ecuacion de segundo grado: ";
    cout << "Ecuacion: ax^2 + bx + c = 0" << endl;
    cout << "Ingrese el valor de a: ", cin >> a;
    cout << "Ingrese el valor de b: ", cin >> b;
    cout << "Ingrese el valor de c: ", cin >> c;
    calcularRaices(a, b, c, raiz1, raiz2, complejo);
    if (!complejo)
        cout << "Son raices reales";
    else {
        cout << "Son raices complejas";
    }
    //cout << "Las raices de la ecuacion son: " << endl;
    cout << "x1 = " << raiz1 << endl;
    cout << "x2 = " << raiz2 << endl;
    return 0;
}
