#include <iostream>

using namespace std;

double getnumeropositivo(){

double a;
cout << "Ingrese un numero positivo \n";
cin >> a;
while (a<=0){

cout << "Ingrese un numero positivo \n";
cin >> a;
}
return a;
}

double getperimetro(double altura, double base){

double perimetro;

perimetro = 2*altura + 2*base;

return perimetro;


}


int main()
{
    double h= getnumeropositivo();
    double b= getnumeropositivo();
    cout <<  getperimetro(h,b);

}
