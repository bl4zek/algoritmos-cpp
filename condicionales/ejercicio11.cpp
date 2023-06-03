#include <iostream>
using namespace std;
int caldiasig(int uDia, int uMes, int uAno){
    switch(uMes){
                case 1:
                    cout << "El día siguiente es " << uDia << " de enero del " << uAno << endl;
                    break;
                case 2:
                    cout << "El día siguiente es " << uDia << " de febrero del " << uAno << endl;
                    break;
                case 3:
                    cout << "El día siguiente es " << uDia << " de marzo del " << uAno << endl;
                    break;
                case 4:
                    cout << "El día siguiente es " << uDia << " de abril del " << uAno << endl;
                    break;
                case 5:
                    cout << "El día siguiente es " << uDia << " de mayo del " << uAno << endl;
                    break;
                case 6:
                    cout << "El día siguiente es " << uDia << " de junio del " << uAno << endl;
                    break;
                case 7:
                    cout << "El día siguiente es " << uDia << " de julio del " << uAno << endl;
                    break;
                case 8:
                    cout << "El día siguiente es " << uDia << " de agosto del " << uAno << endl;
                    break;
                case 9:
                    cout << "El día siguiente es " << uDia << " de septiembre del " << uAno << endl;
                    break;
                case 10:
                    cout << "El día siguiente es " << uDia << " de octubre del " << uAno << endl;
                    break;
                case 11:
                    cout << "El día siguiente es " << uDia << " de noviembre del " << uAno << endl;
                    break;
                case 12:
                    cout << "El día siguiente es " << uDia << " de diciembre del " << uAno << endl;
                    break;
            }
    return 0;
}
int main(){
    int uDia, uMes, uAno;
    cout << "..::Algoritmo para calcular el dia siguiente::.." << endl;
    cout << "Ingrese el dia: ";
    cin >> uDia;
    cout << "Ingrese el mes: ";
    cin >> uMes;
    cout << "Ingrese el año: ";
    cin >> uAno;
    if(uDia == 0){
        cout << "ERROR  porque  el dia " << uDia << " NO EXISTE " << endl;
        return 0;
    }
    if(uMes < 1 || uMes > 12){
        cout << "ERROR  porque  el mes " << uMes << " NO EXISTE " << endl;
        return 0;
    }
    if(uMes == 1 || uMes == 3 || uMes == 5 || uMes == 7 || uMes == 8 || uMes == 10 || uMes == 12){

        uDia += 1;
        if(uDia > 31){
            uDia = 1;
            uMes += 1;
            if(uMes == 13){
                uMes = 1;
                uAno += 1;
                caldiasig(uMes, uAno, uDia);
            }
            
        } else {
            caldiasig(uMes, uAno, uDia);
        }
    } else if(uMes == 4 || uMes == 6 || uMes == 9 || uMes == 11){
        if(uDia < 30){
            uDia += 1;
            caldiasig(uMes, uAno, uDia);
            }
        } else if(uDia == 30){
            uDia = 1;
            uMes += 1;
            caldiasig(uMes, uAno, uDia);
            if(uDia<29 && uDia > 0){
                switch(uMes){
                    case 1:
                        cout << "El día siguiente es " << uDia << " de enero del " << uAno << endl;
                        break;
                    case 2:
                        cout << "El día siguiente es " << uDia << " de febrero del " << uAno << endl;
                        break;
                    case 3:
                        cout << "El día siguiente es " << uDia << " de marzo del " << uAno << endl;
                        break;
                    case 4:
                        cout << "El día siguiente es " << uDia << " de abril del " << uAno << endl;
                        break;
                    case 5:
                        cout << "El día siguiente es " << uDia << " de mayo del " << uAno << endl;
                        break;
                    case 6:
                        cout << "El día siguiente es " << uDia << " de junio del " << uAno << endl;
                        break;
                    case 7:
                        cout << "El día siguiente es " << uDia << " de julio del " << uAno << endl;
                        break;
                    case 8:
                        cout << "El día siguiente es " << uDia << " de agosto del " << uAno << endl;
                        break;
                    case 9:
                        cout << "El día siguiente es " << uDia << " de septiembre del " << uAno << endl;
                        break;
                    case 10:
                        cout << "El día siguiente es " << uDia << " de octubre del " << uAno << endl;
                        break;
                    case 11:
                        cout << "El día siguiente es " << uDia << " de noviembre del " << uAno << endl;
                        break;
                    case 12:
                        cout << "El día siguiente es " << uDia << " de diciembre del " << uAno << endl;
                        break;
                }
            } else{
                cout << "ERROR  porque " << uAno << " no es bisiesto"  << endl;
            }
        } else if(uMes == 28){
            uDia = 1;
            uMes += 1;
            switch(uMes){
                case 1:
                    cout << "El día siguiente es " << uDia << " de enero del " << uAno << endl;
                    break;
                case 2:
                    cout << "El día siguiente es " << uDia << " de febrero del " << uAno << endl;
                    break;
                case 3:
                    cout << "El día siguiente es " << uDia << " de marzo del " << uAno << endl;
                    break;
                case 4:
                    cout << "El día siguiente es " << uDia << " de abril del " << uAno << endl;
                    break;
                case 5:
                    cout << "El día siguiente es " << uDia << " de mayo del " << uAno << endl;
                    break;
                case 6:
                    cout << "El día siguiente es " << uDia << " de junio del " << uAno << endl;
                    break;
                case 7:
                    cout << "El día siguiente es " << uDia << " de julio del " << uAno << endl;
                    break;
                case 8:
                    cout << "El día siguiente es " << uDia << " de agosto del " << uAno << endl;
                    break;
                case 9:
                    cout << "El día siguiente es " << uDia << " de septiembre del " << uAno << endl;
                    break;
                case 10:
                    cout << "El día siguiente es " << uDia << " de octubre del " << uAno << endl;
                    break;
                case 11:
                    cout << "El día siguiente es " << uDia << " de noviembre del " << uAno << endl;
                    break;
                case 12:
                    cout << "El día siguiente es " << uDia << " de diciembre del " << uAno << endl;
                    break;
            }
        } else {
            uDia += 1;
            switch(uMes){
                case 1:
                    cout << "El día siguiente es " << uDia << " de enero del " << uAno << endl;
                    break;
                case 2:
                    cout << "El día siguiente es " << uDia << " de febrero del " << uAno << endl;
                    break;
                case 3:
                    cout << "El día siguiente es " << uDia << " de marzo del " << uAno << endl;
                    break;
                case 4:
                    cout << "El día siguiente es " << uDia << " de abril del " << uAno << endl;
                    break;
                case 5:
                    cout << "El día siguiente es " << uDia << " de mayo del " << uAno << endl;
                    break;
                case 6:
                    cout << "El día siguiente es " << uDia << " de junio del " << uAno << endl;
                    break;
                case 7:
                    cout << "El día siguiente es " << uDia << " de julio del " << uAno << endl;
                    break;
                case 8:
                    cout << "El día siguiente es " << uDia << " de agosto del " << uAno << endl;
                    break;
                case 9:
                    cout << "El día siguiente es " << uDia << " de septiembre del " << uAno << endl;
                    break;
                case 10:
                    cout << "El día siguiente es " << uDia << " de octubre del " << uAno << endl;
                    break;
                case 11:
                    cout << "El día siguiente es " << uDia << " de noviembre del " << uAno << endl;
                    break;
                case 12:
                    cout << "El día siguiente es " << uDia << " de diciembre del " << uAno << endl;
                    break;
            }
        }
    }
    return 0;
}