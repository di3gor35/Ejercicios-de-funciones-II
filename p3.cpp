#include <iostream>
#include <cmath>

using namespace std;

int main(){
    double cop, cad, hipo;
    cout << "Ingrese el valor del cateto opuesto: ", cin >> cop;
    cout << "Ingrese el valor del cateto adyacente: ", cin >> cad;
    hipo = sqrt(pow(cop, 2) + pow(cad, 2));
    cout << "El valor de la hipotenusa es: " << hipo;
    return 0;
}