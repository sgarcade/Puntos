#include<iostream>
using namespace std;
struct estructura
{
	float venta;
	float descuento=0.15;
	float total;	
};
int main ()
{
	estructura i;
	cout<<"Digite cuanto vale el producto a comprar\n";
	cin>>i.venta;
	
	i.total=i.venta*i.descuento;
	i.total=i.venta-i.total;
	
	cout<<"El total a pagar con el 15% de descuento es "<<i.total<<endl;
	
}
