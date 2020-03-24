#include <iostream>

using namespace std;

int main()
{
	int x;
	long y, z=0;

	cin>>x;
	cin>>y;
	if(x>=1&&y<=1000000000)
	{
		z=(x+y)+(x*y)+(y+x)+(y*x);
		cout<<z<<endl;
	}

return 0;
}
