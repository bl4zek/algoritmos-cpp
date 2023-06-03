#include <iostream>
using namespace std;
int main(){
    int milesima, centesima, decima, unidad;
    cout << "..::Algoritmo para determinar el redondeo de un numero por su centena proxima::.." << endl;
    cout << "(4 digitos para formar un entero )Ingrese el primer digito:";
    cin >> milesima;
    cout << "(4 digitos para formar un entero )Ingrese el segundo digito:";
    cin >> centesima;
    cout << "(4 digitos para formar un entero )Ingrese el tercer digito:";
    cin >> decima;
    cout << "(4 digitos para formar un entero )Ingrese el cuarto digito:";
    cin >> unidad;
    cout << "El numero entero formado es: " << milesima << centesima << decima << unidad << endl;
    if(decima >= 5){
        centesima += 1;
        decima = 0;
        unidad = 0;
    } else {
        centesima = centesima;
        decima = 0;
        unidad = 0;
    }
    cout << "El numero entero redondeado es: " << milesima << centesima << decima << unidad << endl;
    return 0;
}