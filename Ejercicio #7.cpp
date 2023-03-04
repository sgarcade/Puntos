#include<iostream>
#include <math.h>
using namespace std;

int main ()
{
	float dolar=4870,dolares,pesos,total;
	int opc;
	cout<<"1. El dolar esta a 4870 pesos\n";
	cout<<"2. El dolar ha cambiado \n";
	cin>>opc;
	switch (opc) 
	{
		case 1:
			cout<<"Digite la cantidad de pesos que desea convertir\n";
			cin>>pesos;
			total=pesos/dolar;
			cout<<"La cantidad de "<<pesos<<" a dolares es de : "<<total<<" dolares";
			break;
			
		case 2:
			cout<<"Digite cuanto esta el dolar actualmente\n";
			cin>>dolares;
			cout<<"Digite la cantidad de pesos que desea convertir\n";
			cin>>pesos;
			total=pesos/dolares;
			cout<<"La cantidad de "<<pesos<<" a dolares es de : "<<total<<" dolares";
			break;			
	}
	
}