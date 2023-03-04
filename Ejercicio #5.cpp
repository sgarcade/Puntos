#include<iostream>
using namespace std;
struct estructura
{
	float total;
	float hombres;
	float mujeres;
	float estu;	
};
int main ()
{
	estructura i;
	cout<<"Digite la cantidad de estudiantes que hay en el curso\n";
	cin>>i.estu;
	cout<<"Digite la cantidad de hombres\n";	
	cin>>i.hombres;
	cout<<"Digite la cantidad de mujeres\n";
	cin>>i.mujeres;
	i.hombres=(i.hombres*100)/i.estu;
	i.mujeres=(i.mujeres*100)/i.estu;
	cout<<"El porcentaje de hombres es de : "<<i.hombres<<"%"<<endl;
	cout<<"El porcentaje de mujeres es de : "<<i.mujeres<<"%";
}
