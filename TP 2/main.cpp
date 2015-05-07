
/*
#TP-2 Programa para saber si un numero es par
Morichetti Elian K1091 1558316
23/04/2015
*/

#include <iostream>

using namespace std;

int main(){

    int a,b;

    cout << "Ingrese un numero para comprobar si es par o no" << endl;

    cin >> a;

    b = a % 2;

    if (b==0)

        cout << "El numero es par" << endl;

    else

        cout << "El numero es impar" << endl;


    return 0;
}
