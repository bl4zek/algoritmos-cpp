#include <iostream>
using namespace std;
int main(){
    int lUno, lDos, lTres;
    cout << "..::Algoritmo para saber si el triangulo es equilatero, isosceles o escaleno::.." << endl;
    cout << "Ingrese el primer lado del triangulo: ";
    cin >> lUno;
    cout << "Ingrese el primer lado del triangulo: ";
    cin >> lDos;
    cout << "Ingrese el primer lado del triangulo: ";
    cin >> lTres;
    if(lUno != lDos && lUno != lTres && lDos!=lTres){
        cout << "El tipo de triangulo es ESCALENO";
    } else if((lUno==lDos && lDos!=lTres || lUno!=lTres)||(lUno==lTres && lDos!=lTres || lDos!=lUno)||(lDos==lTres && lDos!=lUno || lTres!=lUno)){
        cout << "El tipo de triangulo es ISOSCELES";
    } else {
        cout << "El tipo de triangulo es EQUILATERO";
    }
    return 0;
}