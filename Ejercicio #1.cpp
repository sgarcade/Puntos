#include <iostream>
#include <math.h>
using namespace std;
struct estructura
{
	float ganancia;
	float capital;
	float interes=0.02;
};
int main ()
{
	estructura i;
	
	cout<<"Ingrese la cantidad de dinero que desea invertir"<<endl;
	cin>>i.ganancia; 
	i.ganancia = i.capital*i.interes;
	i.ganancia = i.ganancia+i.capital;
	cout<<"Lo que usted va a recibir despues de un mes van a ser "<<i.ganancia<<endl;
	
}

