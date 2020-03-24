#include <iostream>

using namespace std;

int main()
{
	int n, x, y, A, B, C;

	cin>>n;
	cin>>x;
	cin>>y;

	if(n<x&&n<y)
	{
		A=n;
		if(x<y)
		{
			B=x;
			C=y;
		}
		else
		{
			B=y;
			C=x;
		}
	}
	else if(x<n&&x<y)
		{
			A=x;
			if(n<y)
			{
				B=n;
				C=y;
			}
			else
			{
				B=y;
				C=n;
			}
		}
	if(y<n&&y<x)
	{
		A=y;
		if(n<x)
		{
			B=n;
			C=x;
		}
		else
		{
			B=x;
			C=n;
		}
	}
	cout<<"ABC"<<endl;
	cout<<A<<B<<C<<endl;
return 0;
}
