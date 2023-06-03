#include <iostream>
using namespace std;
int main(){
    int num1, num2, num3, may, men;
    cout << "..::Algoritmo para calcular el mayor, menor y el intermedio de tres numeros::.." << endl;
    cout << "Ingrese el primer numero: ";
    cin >> num1;
    cout << "Ingrese el segundo numero: ";
    cin >> num2;
    cout << "Ingrese el tercer numero: ";
    cin >> num3;
    if(num1>num2 && num1>num3){
        cout << "El numero mayor es: " << num1 << endl;
    } else if(num2>num1 && num2>num3){
        cout << "El numero mayor es: " << num2 << endl;
    } else if(num3>num1 && num3>num2){
        cout << "El numero mayor es: " << num3 << endl;
    }
    if(num1<num2 && num1<num3){
        cout << "El numero menor es: " << num1 << endl;
    } else if(num2<num1 && num2<num3){
        cout << "El numero menor es: " << num2 << endl;
    } else if(num3<num1 && num3<num2){
        cout << "El numero menor es: " << num3 << endl;
    }
    if(num1<num2 && num2<num3){
        cout << "El numero intermedio es: " << num2 << endl;
    } else if(num2<num1 && num1<num3){
        cout << "El numero intermedio es: " << num1 << endl;
    } else if(num2<num3 && num3<num1){
        cout << "El numero intermedio es: " << num3 << endl;
    }
    return 0;
}