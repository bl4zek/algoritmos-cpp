#include <iostream>
using namespace std;
int main(){
    int num;
    cout << "..::Algoritmo para determinar si un numero es par o impar y saber si es positivo o negativo::.." << endl;
    cout << "Ingrese el numero: ";
    cin >> num;
    if(num > 0){
        if(num%2==0){
            cout << "El numero " << num << " es par y positivo." << endl;
        } else {
            cout << "El numero " << num << " es impar y positivo." << endl;
        }
    } else if(num < 0){
        if(num%2==0){
            cout << "El numero " << num << " es par y negativo." << endl;
        } else {
            cout << "El numero " << num << " es impar y negativo." << endl;
        }
    } else if(num == 0){
        cout << "El numero es cero" << endl;
    }
    return 0;
}