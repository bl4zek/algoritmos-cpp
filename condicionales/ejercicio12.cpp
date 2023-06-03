#include <iostream>
using namespace std;
int main(){
    int cumpleAno, cumpleMes, cumpleDia, actAno, actMes, actDia, edadano, edadmes, edaddia;
    cout << "..::Algoritmo para calcular la edad a partir de la fecha actual::.." << endl;
    cout << "(CUMPLEANOS): Ingrese el dia: ";
    cin >> cumpleDia;
    cout << "(CUMPLEANOS): Ingrese el mes: ";
    cin >> cumpleMes;
    cout << "(CUMPLEANOS): Ingrese el ano: ";
    cin >> cumpleAno;
    cout << "(ACTUALIDAD): Ingrese el dia: ";
    cin >> actDia;
    cout << "(ACTUALIDAD): Ingrese el mes: ";
    cin >> actMes;
    cout << "(ACTUALIDAD): Ingrese el ano: ";
    cin >> actAno;
    if(cumpleMes<actMes){
        edadano = (actAno - cumpleAno);
        edadmes = actMes - cumpleMes;
        edaddia = (actDia - cumpleDia)+1;
        cout << "Tiene " <<  edadano << " anos, " << edadmes << " meses y " << edaddia << " dias." << endl;
    }else{
        edadano = (actAno - cumpleAno) - 1;
        edadmes = (12 - cumpleMes)+actMes;
        edaddia = actDia - cumpleDia;
        cout << "Tiene " <<  edadano << " anos, " << edadmes << " meses y " << edaddia << " dias." << endl;
    }
    return 0;
}