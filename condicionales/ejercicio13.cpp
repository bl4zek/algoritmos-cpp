#include <iostream>
using namespace std;
int main(){
    int dOrdinal;
    cout << "..::Algoritmo para determinar el mes con el numero ordinal del año (ejm: 350 = pertenece a Diciembre)::.." << endl;
    cout << "Ingrese el dia ordinal del año: ";
    cin >> dOrdinal;
    if(dOrdinal > 0 && dOrdinal <= 31){
        cout << "Pertenece al mes de Enero" << endl;
    } else if(dOrdinal > 31 && dOrdinal <= 31+28){
        cout << "Pertenece al mes de Febrero" << endl;
    } else if(dOrdinal > 31+28 && dOrdinal <= 31+28+31){
        cout << "Pertenece al mes de Marzo" << endl;
    } else if(dOrdinal > 31+28+31 && dOrdinal <= 31+28+31+31){
        cout << "Pertenece al mes de Abril" << endl;
    } else if(dOrdinal > 31+28+31+31 && dOrdinal <= 31+28+31+31+30){
        cout << "Pertenece al mes de Mayo" << endl;
    } else if(dOrdinal > 31+28+31+31+30 && dOrdinal <= 31+28+31+31+30+30){
        cout << "Pertenece al mes de Junio" << endl;
    } else if(dOrdinal > 31+28+31+31+30+30 && dOrdinal <= 31+28+31+31+30+30+31){
        cout << "Pertenece al mes de Julio" << endl;
    } else if(dOrdinal > 31+28+31+31+30+30+31 && dOrdinal <= 31+28+31+31+30+30+31+31){
        cout << "Pertenece al mes de Agosto" << endl;
    } else if(dOrdinal > 31+28+31+31+30+30+31+31 && dOrdinal <= 31+28+31+31+30+30+31+31+30){
        cout << "Pertenece al mes de Septiembre" << endl;
    } else if(dOrdinal > 31+28+31+31+30+30+31+31+30 && dOrdinal <= 31+28+31+31+30+30+31+31+30+30){
        cout << "Pertenece al mes de Octubre" << endl;
    } else if(dOrdinal > 31+28+31+31+30+30+31+31+30+30 && dOrdinal <= 31+28+31+31+30+30+31+31+30+30+31){
        cout << "Pertenece al mes de Noviembre" << endl;
    } else if(dOrdinal > 31+28+31+31+30+30+31+31+30+30+31 && dOrdinal <= 31+28+31+31+30+30+31+31+30+30+31+31){
        cout << "Pertenece al mes de Diciembre" << endl;
    } else {
        cout << "Es un error de numero" << endl;
    }
    return 0;
}