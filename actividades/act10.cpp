#include<iostream>
using namespace std;
int main()
{
	int i, x, y=0;

	cout<<"ingrese numeros";
	cin>>x;

	for(i=1;i<=x;i++)
	{
		if(y%4==0)
		cout<<y<<endl;
		y=y+4;
	}

return 0;
}
