#include<iostream>
using namespace std;
int main()
{
	int u;
	float p, Total, IVA, PB, Des;
	cout<<"precio:";
	cin>>p;
	cout<<"unidades:";
	cin>>u;

	Total=p*u;
	cout<<"Total:"<<Total<<endl;
	IVA=Total*0.15;
	cout<<"IVA:"<<IVA<<endl;
	PB=Total+IVA;
	cout<<"Total con iva:"<<PB<<endl;
	if(PB>50){
	Des=PB*0.05;
	cout<<"descuento:"<<PB-Des<<endl;}
	else {
	cout<<"sin descuento"<<endl;}

return 0;
}
