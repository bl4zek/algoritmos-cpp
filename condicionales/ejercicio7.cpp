#include <iostream>
using namespace std;
int main(){
    int num1, num2, num3, num4, num5;
    cout << "..::Algoritmo para determinar el mayor de cinco numeros::.." << endl;
    cout << "Ingrese el primer numero: ";
    cin >> num1;
    cout << "Ingrese el segundo numero: ";
    cin >> num2;
    cout << "Ingrese el tercer numero: ";
    cin >> num3;
    cout << "Ingrese el cuarto numero: ";
    cin >> num4;
    cout << "Ingrese el quinto numero: ";
    cin >> num5;
    if(num1>num2 && num1>num3 && num1>num4 && num1>num5){
        cout << "El numero mayor es: " << num1 << endl;
    } else if(num2>num1 && num2>num3 && num2>num4 && num2>num5){
        cout << "El numero mayor es: " << num2 << endl;
    } else if(num3>num2 && num3>num1 && num3>num4 && num3>num5){
        cout << "El numero mayor es: " << num3 << endl;
    } else if(num4>num1 && num4>num2 && num4>num3 && num4>num5){
        cout << "El numero mayor es: " << num4 << endl;
    } else if(num5>num2 && num5>num3 && num5>num4 && num5>num1){
        cout << "El numero mayor es: " << num5 << endl;
    } else if(num1==num2 && num1==num3 && num1==num4 && num1==num5){
        cout << "Todos los numeros son iguales" << endl;
    }
    if(num1<num2 && num1<num3 && num1<num4 && num1<num5){
        cout << "El numero menor es: " << num1 << endl;
    } else if(num2<num1 && num2<num3 && num2<num4 && num2<num5){
        cout << "El numero menor es: " << num2 << endl;
    } else if(num3<num1 && num3<num2 && num3<num4 && num3<num5){
        cout << "El numero menor es: " << num3 << endl;
    } else if(num4<num1 && num4<num2 && num4<num3 && num4<num5){
        cout << "El numero menor es: " << num4 << endl;
    } else if(num5<num1 && num5<num2 && num5<num4 && num5<num3){
        cout << "El numero menor es: " << num5 << endl;
    }
    return 0;
}