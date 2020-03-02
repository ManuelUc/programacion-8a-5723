#include<iostream>
using namespace std;

int main()
{
	int x, y=-99;
	cin>>x;
	while(x!=0&&x>=-99)
	{
		if(x>y)
		y=x;
		cin>>x;
	}

	cout<<"el num mayor es: "<<y<<endl;

		if(y<0)
		cout<<"numero negativo"<<endl;
return 0;
}
