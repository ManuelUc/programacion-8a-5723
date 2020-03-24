#include <iostream>
#include <math.h>

using namespace std;

int ObtVal(int m, int C)
{
	int x,t,y;
        y=m*9.81;
        t=acos(y/C);
        x=C*sin(t);
return x;
}

int main()
{
	int C,m,x; 

	cout<<"Ingrese la tensión en newtons"<<endl;
	cin>>C;
	cout<<"Ingrese la masa de la pesa"<<endl;
	cin>>m;
	x=ObtVal(m,C);

	cout<<"La fuerza requerida en A es: "<<x<<" N"<<endl;

return 0;
}
