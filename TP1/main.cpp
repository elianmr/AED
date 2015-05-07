
/*
#TP-1 Programa para sumar - restar - multiplicar - comparar dos numeros
Morichetti Elian K1091 1558316
16/04/2015
*/

#include <iostream>

using namespace std;
using std::cout;
using std::cin;
using std::endl;


int main(){

/*
#TP-1 Programa para sumar - restar - multiplicar - comparar dos numeros
Morichetti Elian K1091 1558316
16/04/2015
*/

 int n1;
 int n2;
 int n3;
 int n4;
 int suma;
 int resta;
 int multiplicacion;
 int dni;
 char Apellido[20],
      Nombre [20];
 char letra1, letra2;
 bool validacion;



 cout << "Escriba dos numeros enteros que se van a comparar: ";
 cin >> n3 >> n4;

 if (n3 > n4){
 cout << n3 << " > " << n4 << endl;
 }

 if (n3 == n4){
 cout << n3 << " == " << n4 << endl;
 }

 if (n3 < n4){
 cout << n3 << " < " << n4 << endl;
    }

 cout << "Escriba un Numero entero: " <<endl;

 cin >> n1 ;

 cout << "Escriba otro Numero entero: " <<endl;
 cin >> n2 ;

 suma = n1 + n2 ;
 resta = n1 - n2 ;
 multiplicacion = n1 * n2 ;

 cout << "La suma de " << n1 << " + " << n2 << " es: " << suma << endl;
 cout << "La resta de " << n1 << " - " << n2 << " es: " << resta << endl;
 cout << "La multiplicacion de " << n1 << " * " << n2 << " es: " << multiplicacion << endl;

/*
TP 1
Programa para uso de booleanas
*/
    cout <<  "\n True or false: ";
    cout << true or false ;
    cout <<  "\n not true: ";
    cout <<  not true ;

/*
TP 1
Programa para comparar dos booleanas
*/

    cout << " \n Ingrese una letra: ";
    cin >> letra1;

    cout << "Ingrese otra letra : ";
    cin >> letra2;

    validacion = false;
    if(letra1 == letra2){
        validacion = true;
        cout << "\n Las letras son iguales.";
    }
    else{ cout << "\n Las letras son distintas ";}

/*
TP 1
Utilizacion de caracteres
*/



 cout << "/n Ingrese apellido del usuario: ";
 cin >> Apellido;

 cout << "\n Ingrese nombre del usuario:";
 cin >> Nombre;

 cout << "\n Ingrese el DNI del usuario: ";
 cin >> dni;

 cout << "\n Apellido y nombre del usuario:" << Apellido ;
 cout << ", " << Nombre;
 cout <<"\n Dni: " << dni;
 return 0;
}











