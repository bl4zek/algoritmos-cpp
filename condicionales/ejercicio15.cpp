#include <iostream>
using namespace std;
int main(){
    int numEntero, unidades, decenas, centenas;
    cout << "..::Algoritmo para calcular el numero entero en letras::.." << endl;
    cout << "Ingrese el numero entero: ";
    cin >> numEntero;
    unidades = numEntero % 10; numEntero /= 10;
    decenas = numEntero % 10; numEntero /= 10;
    centenas = numEntero % 10; numEntero /= 10;
    switch(centenas){
        case 1:
            cout << "Cien ";
            break;
        case 2:
            cout << "Doscientos ";
            break;
        case 3:
            cout << "Tresientos ";
            break;
        case 4:
            cout << "Cuatrocientos ";
            break;
        case 5:
            cout << "Quinientos ";
            break;
        case 6:
            cout << "Seicientos ";
            break;
        case 7:
            cout << "Setecientos";
            break;
        case 8:
            cout << "Ochocientos ";
            break;
        case 9:
            cout << "Novecientos ";
            break;
    }
    switch(decenas){
        case 1:
            cout << "diez ";
            break;
        case 2:
            cout << "veinte ";
            break;
        case 3:
            cout << "treinta ";
            break;
        case 4:
            cout << "cuarenta ";
            break;
        case 5:
            cout << "cincuenta ";
            break;
        case 6:
            cout << "sesenta ";
            break;
        case 7:
            cout << "setenta ";
            break;
        case 8:
            cout << "ochenta";
            break;
        case 9:
            cout << "noventa ";
            break;
    }
    switch(unidades){
        case 1:
            cout << " Uno";
            break;
        case 2:
            cout << " Dos";
            break;
        case 3:
            cout << " Tres";
            break;
        case 4:
            cout << " Cuatro";
            break;
        case 5:
            cout << " Cinco";
            break;
        case 6:
            cout << " Seis";
            break;
        case 7:
            cout << " Siete";
            break;
        case 8:
            cout << " Ocho";
            break;
        case 9:
            cout << " Nueve";
            break;
    }
    return 0;
}