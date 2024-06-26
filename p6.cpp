#include <iostream>
#include <cstdlib>
#include <string>
#include <ctime>
using namespace std;

int esValido(){
    int opcion;
    bool res = false;
    do{
        cout << "Introduzca una opcion (0: piedra, 1: papel, 2: tijera): ", cin >> opcion;
        if (opcion >= 0 && opcion <= 2){
            res = true;
        } else {
            cout << "Opcion no valida" << endl;
        }
    } while (res == false);
    return opcion;
}

void esGanador(int op_pc, int op_usu, int &c_pc, int &c_usu){
    if (op_pc == op_usu){
        cout << "Empate" << endl;
    } else if ( (op_usu == 0 && op_pc == 2) || (op_usu == 1 && op_pc == 0) || (op_usu == 2 && op_pc == 1) ){
        cout << "Ganaste" << endl;
        c_usu++;
    } else {
        cout << "Perdiste" << endl;
        c_pc++;
    }
}

int main(){
    srand(time(0));
    string options[3] = {"piedra", "papel", "tijera"};

    int opcion, opcionpc, c_humano = 0 , c_pc = 0;

    do {
        opcion = esValido();
        opcionpc = rand() % 3;
        esGanador(opcionpc, opcion, c_pc, c_humano);
        cout << "Puntaje: " << c_humano << " vs " << c_pc << endl;
        
    } while (c_humano < 3 && c_pc < 3);

    if (c_humano == 3){
        cout << "Usted ha sido el ganador";
    } else {
        cout << "Usted ha perdido";
    }

    return 0;
}