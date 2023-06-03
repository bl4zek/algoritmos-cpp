#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int opc, res, cBase, cAltura, cRadio;
    float pi=3.14159;
    cout << "..::Algoritmo para calcular el area de cinco figuras geometricas::.." << endl;
    cout << "Ingrese la opcion para calcular el area: ";
    cout << "1. Area de un Cuadrado" << endl;
    cout << "2. Area de un Triangulo" << endl;
    cout << "3. Area de un Circulo" << endl;
    cout << "4. Area de un Rectangulo" << endl;
    cout << "5. Area de un Pentagono" << endl;
    cin >> opc;
    switch(opc){
        case 1:
            cout << "Area de un Cuadrado" << endl;
            cout << "Ingrese la medida de la base: ";
            cin >> cBase;
            cout << "Ingrese la medida de la altura: ";
            cin >> cAltura;
            res = cBase * cAltura;
            cout << "El area del cuadrado es: " << res << endl;
            break;
        case 2:
            cout << "Area de un Triangulo" << endl;
            cout << "Ingrese la medida de la base: ";
            cin >> cBase;
            cout << "Ingrese la medida de la altura: ";
            cin >> cAltura;
            res = (cBase * cAltura)/2;
            cout << "El area del triangulo es: " << res << endl;
            break;
        case 3:
            cout << "Area de un Circulo" << endl;
            cout << "Ingrese el valor de el radio: ";
            cin >> cRadio;
            res = pi*pow(cRadio, 2);
            break;
        case 4:
            cout << "Area de un Rectangulo" << endl;
            cout << "Ingrese la medida de la base: ";
            cin >> cBase;
            cout << "Ingrese la medida de la altura: ";
            cin >> cAltura;
            res = cBase * cAltura;
            cout << "El area del rectangulo es: " << res << endl;
            break;
        case 5:
            cout << "Area de un Rectangulo" << endl;
            cout << "Ingrese la medida del apotema: ";
            cin >> cBase;
            cout << "Ingrese la medida del lado: ";
            cin >> cAltura;
            res = 5/2*(cBase * cAltura);
            cout << "El area del pentagono es: " << res << endl;
            break;
        default:
            cout << "Opcion invalida, seleccione una entre 1-5" << endl;
            break;
    }
    return 0;
}