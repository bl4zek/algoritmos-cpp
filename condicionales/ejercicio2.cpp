#include <iostream>

using namespace std;

int main()
{
    int uDia, uMes, uAno;
    cout << "..::Algoritmo para saber signo zodiacal (Ingresar el dia, mes y año en numero entero)::.." << endl;
    cout << "dd/mm/aa" << endl;
    cout << "Ingresa el día de nacimiento: " << endl;
    cin >> uDia;
    cout << "Ingresa el mes de nacimiento: " << endl;
    cin >> uMes;
    cout << "Ingresa el año de nacimiento: " << endl;
    cin >> uAno;
    cout << "------------------------------------------------" << endl;
    if((uDia >= 21  && uMes == 3) || (uDia <= 19  && uMes == 4)){
        cout << uDia << "/" << uMes << "/"  << uAno << ": El signo es Aries" << endl;
    } else if((uDia >= 20  && uMes == 4) || (uDia <= 20  && uMes == 5)){
        cout << uDia << "/" << uMes << "/"  << uAno << ": El signo es Tauro" << endl;
    } else if((uDia >= 21  && uMes == 5) || (uDia <= 20  && uMes == 6)){
        cout << uDia << "/" << uMes << "/"  << uAno << ": El signo es Geminis" << endl;
    } else if((uDia >= 21  && uMes == 6) || (uDia <= 22  && uMes == 7)){
        cout << uDia << "/" << uMes << "/"  << uAno << ": El signo es Cancer" << endl;
    } else if((uDia >= 23  && uMes == 7) || (uDia <= 22  && uMes == 8)){
        cout << uDia << "/" << uMes << "/"  << uAno << ": El signo es Leo" << endl;
    } else if((uDia >= 23  && uMes == 8) || (uDia <= 22  && uMes == 9)){
        cout << uDia << "/" << uMes << "/"  << uAno << ": El signo es Virgo" << endl;
    } else if((uDia >= 23  && uMes == 9) || (uDia <= 22  && uMes == 10)){
        cout << uDia << "/" << uMes << "/"  << uAno << ": El signo es Libra" << endl;
    } else if((uDia >= 23  && uMes == 10) || (uDia <= 21  && uMes == 11)){
        cout << uDia << "/" << uMes << "/"  << uAno << ": El signo es Escorpio" << endl;
    } else if((uDia >= 22  && uMes == 11) || (uDia <= 21  && uMes == 12)){
        cout << uDia << "/" << uMes << "/"  << uAno << ": El signo es Sagitario" << endl;
    } else if((uDia >= 22  && uMes == 12) || (uDia <= 19  && uMes == 1)){
        cout << uDia << "/" << uMes << "/"  << uAno << ": El signo es Capricornio" << endl;
    } else if((uDia >= 20  && uMes == 1) || (uDia <= 18  && uMes == 2)){
        cout << uDia << "/" << uMes << "/"  << uAno << ": El signo es Acuario" << endl;
    } else if((uDia >= 19  && uMes == 2) || (uDia <= 20  && uMes == 3)){
        cout << uDia << "/" << uMes << "/"  << uAno << ": El signo es Piscis" << endl;
    }
    cout << "------------------------------------------------" << endl;
    return 0;
}
