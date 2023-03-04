#include<iostream>
#include<math.h>
using namespace std;
struct estructura
{
	float comision=0.10;
	float sueldo;
	float  venta;
	float  venta1;
	float  venta2;
	float  venta3;
	float  ganancia;
	
};
int main ()
{
	estructura u;
	cout<<"Dijite su sueldo actual"<<endl;
	cin>>u.sueldo;
	for (int i = 1;i<4;i++)
	{
		cout<<"Digite de cuanto fue la venta # "<<i<<endl;
		cin>>u.venta;
		if(i==1)
		{
			u.venta= u.venta*u.comision;
			u.venta1=u.venta;
		}
		else if(i==2)
		{
			u.venta= u.venta*u.comision;
			u.venta2=u.venta;
		}
		else if(i==3)
		{
			u.venta= u.venta*u.comision;
			u.venta3=u.venta;
		}

	}
			u.ganancia=u.sueldo+u.venta1+u.venta2+u.venta3;
		cout<<"El sueldo de este mes con las comisiones es de "<<u.ganancia<<endl;
}
