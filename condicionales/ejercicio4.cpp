#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int pOpc;
    float res, pBits, pBytes;
    cout << "..::Algoritmo para transformar de bits a Bytes, KB, MB, GB y TB::.." << endl;
    cout << "Ingrese la cantidad de BITS que desea transformar: ";
    cin >> pBits;
    cout << "Ingrese a que sistema de unidad desea transformar" << endl;
    cout << "1. Bits -> Byte" << endl;
    cout << "2. Bits -> KB" << endl;
    cout << "3. Bits -> MB" << endl;
    cout << "4. Bits -> GB" << endl;
    cout << "5. Bits -> TB" << endl;
    cin >> pOpc;
    pBytes = pBits / 8;
    switch(pOpc){
        case 1:
            cout << pBits << " bits -> " << pBytes << " bytes" << endl;
            break;
        case 2:
            res = pBytes / (pow(2, 10));
            cout << pBits << " bits -> " << res << " KB" << endl;
            break;
        case 3:
            res = pBytes / (pow(2, 20));
            cout << pBits << " bits -> " << res << " MB" << endl;
            break;
        case 4:
            res = pBytes / (pow(2, 30));
            cout << pBits << " bits -> " << res << " GB" << endl;
            break;
        case 5:
            res = pBytes / (pow(2, 40));
            cout << pBits << " bits -> " << res << " TB" << endl;
            break;
        default:
            res = pBytes / (pow(2, 50));
            cout << "Opcion Incorrecta" << endl;
            break;
    }
    return 0;
}
