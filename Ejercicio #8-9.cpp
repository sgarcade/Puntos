#include<iostream>
using namespace std;
int main ()
{
	float gine,trau,pedi,gines,traus,pedis;
	cout<<"Digite cuanto recibio para ginecologia\n";
	cin>>gine;
	cout<<"Digite cuanto recibio para traumatologia\n";
	cin>>trau;
	cout<<"Digite cuanto recibio para pediatria\n";
	cin>>pedi;
	gines=gine*0.40;
	gines=gine-gines;
	traus=trau*0.30;
	traus=trau-traus;
	pedis=pedi*0.30;
	pedis=pedi-pedis;
	cout<<"La ganacia de ginecologia es de :"<<gines<<endl;
	cout<<"La ganacia de traumatologia es de : "<<traus<<endl;
	cout<<"La ganacia de pediatria es de : "<<pedis;
	
}