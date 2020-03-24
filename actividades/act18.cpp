#include <iostream>

using namespace std;

int main()
{
	int n, x, y;
	
	cin>>n;
	x=n%2;
	y=n%3;
	if(n!=3&&n!=2)
	{
		if(x==1&&y>0)
		{
			cout<<n<<"es primo"<<endl;
		}
		else
		{
			cout<<n<<"no es primo"<<endl;
		}
	}
	else
	{
		cout<<n<<"es primo"<<endl;
	}
	return 0;
}
