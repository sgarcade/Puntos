#include<iostream>
using namespace std;
struct estructura
{
	float final;
	float trabajo2;
	float trabajo3;	
	float trabajo1;	
	float examen;
	float trabajofinal;
	float finaltrabajos;
	float trabajos;
};
int main ()
{
	estructura u;
	
	cout<<"Buenos dias estudiante, para saber su nota final por favor digite las siguientes notas: \n";
	for (int i =1;i<4;i++)
	{
		cout<<"Digite la nota del trabajo # "<<i<<endl;
		cin>>u.trabajos;
		if (i==1)
		{
			u.trabajo1=u.trabajos;
		}
		else if (i==2)
		{
			u.trabajo2=u.trabajos;
		}
		else if (i==3)
		{
			u.trabajo3=u.trabajos;
		}
		
	}
	u.finaltrabajos=(u.trabajo1+u.trabajo2+u.trabajo3)/3;
	u.finaltrabajos=u.finaltrabajos*0.55;
	cout<<"Digite la nota del examen final\n";
	cin>>u.examen;
	u.examen=u.examen*0.30;
	cout<<"Digite la nota del trabajo final \n";
	cin>>u.trabajofinal;
	u.trabajofinal=u.trabajofinal*0.15;
	
	u.final=u.finaltrabajos+u.examen+u.trabajofinal;
	
	cout<<"Su nota final del corte es de : "<<u.final;
}
