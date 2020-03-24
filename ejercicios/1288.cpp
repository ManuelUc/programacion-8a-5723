#include <iostream>

using namespace std;

int main()
{
	int n,t;
	cin>>t;
	for(int i=1;i<=t;i++)
	{
		cin>>n;
		if(n%6==0)
		cout<<"YES"<<endl;
		else
		cout<<"NO"<<endl;
	}

return 0;
}
