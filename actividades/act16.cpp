#include<iostream>
using namespace std;
int main()
{

	int i, x, c=0, m=0, g=0;
	cout<<"ingresar numeros"<<endl;
	for(i=1;i<=100;i++)
	{
		cin>>x;
		if(x<15)
		c+=+1;
		if(x>50)
		m+=+1;
		if(x>25&&x<45)
		g+=+1;
	}
	cout<<"numeros menores a 15:"<<c<<endl;
	cout<<"numeros mayores a 50:"<<m<<endl;
	cout<<"numeros entre 25 y 45:"<<g<<endl;

return 0;
}
