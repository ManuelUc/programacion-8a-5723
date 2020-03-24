#include <iostream>

using namespace std;

int main()
{
	double n, x=1;

	cin>>n;
	if(n>=0&&n<=265)
	{
	for(int i=0;i<n;i++)
		x=x*2;
	cout<<x<<endl;
	return 0;
	}
	else
	{
		return 1;
	}
}
