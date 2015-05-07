/*Preguntas y Respuestas
22/04/2015
Morichetti Elian
*/

#include <iostream>
#include <stdio.h>
#include <string.h>
using namespace std;

int main(){

bool inicio;
int tematica;
int CP=0;
int PC=0;
int rta=0;
char rta2[10];
bool i;
char rta3[10];

cout << "Bienvenido al programa de Preguntas y Respuestas \n" << endl;
cout << "Presione 1 para iniciar o 0 para salir del juego \n" << endl;
cin >> inicio;

while (inicio != 0 ){

cout << "\n Presione el numero de la tematica que desee jugar: \n 1)Matematica \n 2)Historia y Geografia \n 3)Deportes \n 4)Entretenimiento \n" << endl;
cin >> tematica;

switch(tematica){

case(1):{


{cout << "\n Cuantas decenas hay en 3 centenas? \n" << endl;

cin >> rta;
CP++;

if (rta == 30){cout << "\n Respuesta correcta \n"; PC++; cout << "\n Cantidad de preguntas: " << CP; cout << "\n Respuestas correctas: " <<PC;}

else { cout << "\n La respuesta correcta es: 30 \n"; cout << "\n Cantidad de preguntas: " << CP; cout << "\n Respuestas correctas: " <<PC;}}

{cout << "\n Si tienes el numero 50 cual sera el resultado al dividirlo po 1/2 y despues sumarle 5? \n" << endl;
cin >> rta;
CP++;

if (rta == 105){

cout << "\n Respuesta correcta \n"; PC++; cout << "\n Cantidad de preguntas: " << CP; cout << "\n Respuestas correctas: " <<PC;}

else

    cout << "\n La respuesta correcta es: 105 \n"; cout << "\n Cantidad de preguntas: " << CP; cout << "\n Respuestas correctas: " <<PC;

}

{cout << "\n Cual es la raiz cuadrada de 9? \n" << endl;

cin >> rta;
CP++;

if (rta == 3){

cout << "\n Respuesta correcta \n"; PC++; cout << "\n Cantidad de preguntas: " << CP; cout << "\n Respuestas correctas: " <<PC;}
else
    cout << "\n La respuesta correcta es: 3 \n"; cout << "\n Cantidad de preguntas: " << CP; cout << "\n Respuestas correctas: " <<PC;
}

{cout << "\n 22 + 55 * 33? \n" << endl;
cin >> rta;
CP++;

if (rta == 1837){

cout << "\n Respuesta correcta \n"; PC++; cout << "\n Cantidad de preguntas: " << CP; cout << "\n Respuestas correctas: " <<PC;}

else
    cout << "\n La respuesta correcta es: 1837 \n"; cout << "\n Cantidad de preguntas: " << CP; cout << "\n Respuestas correctas: " <<PC;
}

{cout << "\n Un carpintero tiene una pieza de madera de 10 metros y cada dia corta 2metros de ella, en cuantos dias terminaria de cortar la pieza? \n" << endl;
cin >> rta;
CP++;

if (rta == 5){

cout << "\n Respuesta correcta \n"; PC++; cout << "\n Cantidad de preguntas: " << CP; cout << "\n Respuestas correctas: " <<PC;}

else
    cout << "\n La respuesta correcta es: 5 \n"; cout << "\n Cantidad de preguntas: " << CP; cout << "\n Respuestas correctas: " <<PC;
}

cout << "\n Presione 1 para seguir jugando o 0 para salir del juego \n" << endl;
cin >> inicio;
if (inicio == 0) return 0;
rta=0;
}

case (2): {

{cout << "\n Cual es la capital de corrientes? \n" << endl;

cin >> rta2;
CP++;

strcpy(rta3,"corrientes");

i=strcmp(rta3,rta2);

if (i==0){cout << "\n Respuesta correcta \n" << endl; PC++;  cout << "\n Cantidad de preguntas: " << CP; cout << "\n Respuestas correctas: " <<PC;}

else cout << "\n La respuesta correcta es: Corrientes \n" << endl;  cout << "\n Cantidad de preguntas: " << CP; cout << "\n Respuestas correctas: " <<PC;}

{cout << "\n Cuantas franjas horizontales tiene la bandera Argentina? \n" << endl;
cin >> rta;
CP++;

if (rta == 3){

cout << "\n Respuesta correcta \n"; PC++; cout << "\n Cantidad de preguntas: " << CP; cout << "\n Respuestas correctas: " <<PC;}

else

    cout << "\n La respuesta correcta es: 3 \n";  cout << "\n Cantidad de preguntas: " << CP; cout << "\n Respuestas correctas: " <<PC;

}

{cout << "\n Como se llama el sargento que salvo la vida del Gral. San Martin? \n" << endl;

cin >> rta2;
CP++;

strcpy(rta3,"cabral");

i=strcmp(rta3,rta2);

if (i==0){

cout << "\n Respuesta correcta \n"; PC++; cout << "\n Cantidad de preguntas: " << CP; cout << "\n Respuestas correctas: " <<PC;}
else
    cout << "\n La respuesta correcta es: Cabral \n";  cout << "\n Cantidad de preguntas: " << CP; cout << "\n Respuestas correctas: " <<PC;
}

{cout << "\n Cual es la capital de Rusia? \n" << endl;
cin >> rta2;
CP++;

strcpy(rta3,"moscu");

i=strcmp(rta3,rta2);

if (i==0){

cout << "\n Respuesta correcta \n"; PC++;  cout << "\n Cantidad de preguntas: " << CP; cout << "\n Respuestas correctas: " <<PC;}

else
    cout << "\n La respuesta correcta es: Moscu \n";  cout << "\n Cantidad de preguntas: " << CP; cout << "\n Respuestas correctas: " <<PC;
}

{cout << "\n Cual es la capital de Colombia? \n" << endl;
cin >> rta2;
CP++;

strcpy(rta3,"bogota");

i=strcmp(rta3,rta2);

if (i==0){

cout << "\n Respuesta correcta \n"; PC++; cout << "\n Cantidad de preguntas: " << CP; cout << "\n Respuestas correctas: " <<PC;}

else
    cout << "\n La respuesta correcta es: Bogota \n" ;  cout << "\n Cantidad de preguntas: " << CP; cout << "\n Respuestas correctas: " <<PC;
}

cout << "\n Presione 1 para seguir jugando o 0 para salir del juego \n" << endl;
cin >> inicio;
if (inicio == 0) return 0;
rta=0;
}

case (3): {

{cout << "\n Cuantos mundiales gano argentina? \n" << endl;

cin >> rta;
CP++;

if (rta == 2){cout << "\n Respuesta correcta \n"; PC++;  cout << "\n Cantidad de preguntas: " << CP; cout << "\n Respuestas correctas: " <<PC;}

else cout << "\n La respuesta correcta es: 2 \n"; cout << "\n Cantidad de preguntas: " << CP; cout << "\n Respuestas correctas: " <<PC;}

cout << "\n Cual es el estadio de futbol de Argentina? \n" << endl;

cin >> rta2;
CP++;

strcpy(rta3,"monumental");

i=strcmp(rta3,rta2);

if (i==0){cout << "\n Respuesta correcta \n"; PC++; cout << "\n Cantidad de preguntas: " << CP; cout << "\n Respuestas correctas: " <<PC;}

else

    cout << "\n La respuesta correcta es: Monumental \n";  cout << "\n Cantidad de preguntas: " << CP; cout << "\n Respuestas correctas: " <<PC;



cout << "\n Que equipo gano el Mundial Brasil 2014? \n" << endl;

cin >> rta2;

CP++;

strcpy(rta3,"alemania");

i=strcmp(rta3,rta2);

if (i==0){cout << "\n Respuesta correcta \n"; PC++; cout << "\n Cantidad de preguntas: " << CP; cout << "\n Respuestas correctas: " <<PC;}

else
    cout << "\n La respuesta correcta es: Alemania \n"; cout << "\n Cantidad de preguntas: " << CP; cout << "\n Respuestas correctas: " <<PC;


cout << "\n Presione 1 para seguir jugando o 0 para salir del juego \n" << endl;
cin >> inicio;
if (inicio == 0) {return 0;};
}

case (4): {

{cout << "\n En que anio se estreno la pelicula de Disney Pinocho? \n" << endl;

cin >> rta;
CP++;

if (rta == 1940){cout << "\n Respuesta correcta \n"; PC++; cout << "\n Cantidad de preguntas: " << CP; cout << "\n Respuestas correctas: " <<PC;}

else { cout << "\n La respuesta correcta es: 1940 \n"; cout << "\n Cantidad de preguntas: " << CP; cout << "\n Respuestas correctas: " <<PC;}}

{cout << "\n Quien es la mascota de SEGA? \n" << endl;
cin >> rta2;
CP++;

strcpy(rta3,"sonic");

i=strcmp(rta3,rta2);

if (i==0){

cout << "\n Respuesta correcta \n"; PC++; cout << "\n Cantidad de preguntas: " << CP; cout << "\n Respuestas correctas: " <<PC;}

else

    cout << "\n La respuesta correcta es: Sonic \n"; cout << "\n Cantidad de preguntas: " << CP; cout << "\n Respuestas correctas: " <<PC;

}

{cout << "\n Que personaje del videojuego Mortal Kombat tiene poderes de hielo? \n" << endl;

cin >> rta2;
CP++;

strcpy(rta3,"subzero");

i=strcmp(rta3,rta2);

if (i==0){

cout << "\n Respuesta correcta \n"; PC++; cout << "\n Cantidad de preguntas: " << CP; cout << "\n Respuestas correctas: " <<PC;}
else
    cout << "\n La respuesta correcta es: subzero \n"; cout << "\n Cantidad de preguntas: " << CP; cout << "\n Respuestas correctas: " <<PC;
}

cout << "\n Presione 1 para seguir jugando o 0 para salir del juego \n" << endl;
cin >> inicio;
if (inicio == 0) return 0;
rta=0;

}

}}}
