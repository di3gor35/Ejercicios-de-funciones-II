#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main(){
    int vmax, n;
    srand(time(0));
    cout << "Ingrese el valor maximo del numero: ", cin >> vmax;
    cout << "Ingrese la cantidad de numeros aleatorios a generar: ", cin >> n;
    
    for (int i = 1; i <= n; i++){
        int num = rand() % (vmax + 1);
        cout << num << " ";
    }

    return 0;
}