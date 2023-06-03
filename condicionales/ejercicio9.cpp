#include <iostream>
using namespace std;
int main(){
    int eNota;
    cout << "..::Algoritmo de notas sobre 20 para saber el estado del estudiante::.." << endl;
    cout << "Ingrese la nota del estudiante (0-20): ";
    cin >> eNota;
    if(eNota == 20 || eNota == 19){
        cout << "20-19 es Sobresaliente" << endl;
    } else if(eNota >= 16 && eNota <=18){
        cout << "18-16 es Muy buena" << endl;
    } else if(eNota < 16 && eNota > 12){
        cout << "15-13 es Buena" << endl;
    } else if(eNota <= 12 && eNota >=10){
        cout << "12-10 es Regular" << endl;
    } else if(eNota <= 9 && eNota >= 0){
        cout << "9-0 es Insuficiente" << endl;
    } else {
        cout << "Error en el rango de notas del 0 al 20" << endl;
    }
    return 0;
}