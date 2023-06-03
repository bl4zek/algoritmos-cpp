#include <iostream>
using namespace std;
int main(){
    int ordinario;
    cout << "..::Algortimo para saber el dia de la semana con el numero::.." << endl;
    cout << "Ingrese el ordinario de la semana: ";
    cin >> ordinario;
    switch(ordinario){
        case 1: cout << "Lunes" << endl; break;
        case 2: cout << "Martes" << endl; break;
        case 3: cout << "Miercoles" << endl; break;
        case 4: cout << "Jueves" << endl; break;
        case 5: cout << "Viernes" << endl; break;
        case 6: cout << "Sabado" << endl; break;
        case 7: cout << "Domingo" << endl; break;
        default:
            cout << "Dia invalido del 1-7" << endl;
    }
    return 0;
}