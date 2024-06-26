#include <iostream>
#include <cmath>
//#define M_PI;
using namespace std;

int main(){ 
    double radio, area;
    cout << "Ingrese el radio del circulo: ";
    cin >> radio;
    area = M_PI * pow(radio, 2);
    cout << "El area del circulo es: " << area << endl;
    //El area del circulo es: 12.5664
    return 0;
}